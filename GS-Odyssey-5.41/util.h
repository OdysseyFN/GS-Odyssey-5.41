#pragma once

inline bool bDebugLog = true;

enum LogLevel {
    Log,
    Debug,
    Warning,
    Error
};

void WriteLog(const char* category, LogLevel level, const char* format, ...)
{
    const char* levelStr;

    if (!bDebugLog && level == LogLevel::Debug)
        return;

    switch (level) {
        case LogLevel::Log: levelStr = "Info"; break;
        case LogLevel::Debug: levelStr = "Debug"; break;
        case LogLevel::Warning: levelStr = "Warning"; break;
        case LogLevel::Error: levelStr = "Error"; break;
        default: levelStr = "Unknown"; break;
    }

    printf("OdysseyLog: %s: %s: ", category, levelStr);

    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);

    printf("\n");
}

#define FN_LOG(Category, Level, ...) WriteLog(#Category, Level, __VA_ARGS__)

static auto StaticLoadObjectInternal = reinterpret_cast<UObject * (*)(UClass * InClass, UObject * InOuter, const TCHAR * Name, const TCHAR * FileName, uint32_t LoadFlags, UPackageMap * Sandbox, bool bAllowObjectReconciliation)>(uintptr_t(GetModuleHandle(NULL)) + 0x1856210);

template <typename T>
static T* StaticLoadObject(const TCHAR* InPath)
{
    return (T*)StaticLoadObjectInternal(T::StaticClass(), nullptr, InPath, nullptr, 0, nullptr, false);
}

template <typename T>
static T* FindObjectFast(std::string ObjectName, UClass* ObjectClass = UObject::StaticClass())
{
    auto OrigInName = std::wstring(ObjectName.begin(), ObjectName.end()).c_str();

    auto StaticFindObject = (T * (*)(UClass*, UObject * Package, const wchar_t* OrigInName, bool ExactClass))((uintptr_t)GetModuleHandleA(0) + 0x1854780);
    return StaticFindObject(ObjectClass, nullptr, OrigInName, false);
}

struct FActorSpawnParameters
{
    /* A name to assign as the Name of the Actor being spawned. If no value is specified, the name of the spawned Actor will be automatically generated using the form [Class]_[Number]. */
    FName Name = FName(0);

    /* An Actor to use as a template when spawning the new Actor. The spawned Actor will be initialized using the property values of the template Actor. If left NULL the class default object (CDO) will be used to initialize the spawned Actor. */
    AActor* Template = nullptr;

    /* The Actor that spawned this Actor. (Can be left as NULL). */
    AActor* Owner = nullptr;

    /* The APawn that is responsible for damage done by the spawned Actor. (Can be left as NULL). */
    APawn* Instigator = nullptr;

    /* The ULevel to spawn the Actor in, i.e. the Outer of the Actor. If left as NULL the Outer of the Owner is used. If the Owner is NULL the persistent level is used. */
    class	ULevel* OverrideLevel = nullptr;

    /** Method for resolving collisions at the spawn point. Undefined means no override, use the actor's setting. */
    ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::Undefined;

private:

    friend class UPackageMapClient;

    /* Is the actor remotely owned. This should only be set true by the package map when it is creating an actor on a client that was replicated from the server. */
    uint16	bRemoteOwned : 1;

public:

    bool IsRemoteOwned() const { return bRemoteOwned; }

    /* Determines whether spawning will not fail if certain conditions are not met. If true, spawning will not fail because the class being spawned is `bStatic=true` or because the class of the template Actor is not the same as the class of the Actor being spawned. */
    uint16	bNoFail : 1;

    /* Determines whether the construction script will be run. If true, the construction script will not be run on the spawned Actor. Only applicable if the Actor is being spawned from a Blueprint. */
    uint16	bDeferConstruction : 1;

    /* Determines whether or not the actor may be spawned when running a construction script. If true spawning will fail if a construction script is being run. */
    uint16	bAllowDuringConstructionScript : 1;

#if WITH_EDITOR
    /** Determines whether the begin play cycle will run on the spawned actor when in the editor. */
    uint16 bTemporaryEditorActor : 1;
#endif

    /* Flags used to describe the spawned actor/object instance. */
    EObjectFlags ObjectFlags;
};

class Util
{
public:
    template <typename ActorType>
    static ActorType* SpawnActor(UClass* Class, FVector Location = FVector(), FRotator Rotation = FRotator())
    {
        // 7FF670C24D40
        AActor* (*RealSpawnActor)(UWorld* World, UClass* Class, FVector const* Location, FRotator const* Rotation, const FActorSpawnParameters& SpawnParameters) = decltype(RealSpawnActor)(0x25D4D40 + uintptr_t(GetModuleHandle(0)));

        auto SpawnParameters = (FActorSpawnParameters*)VirtualAlloc(0, sizeof(FActorSpawnParameters), MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
        SpawnParameters->SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
        SpawnParameters->bDeferConstruction = false;

        AActor* Actor = RealSpawnActor(Globals::GetWorld(), Class, &Location, &Rotation, *SpawnParameters);

        VirtualFree(SpawnParameters, 0, MEM_RELEASE);

        return (ActorType*)Actor;
    }

    static AFortPlayerPawn* SpawnPlayer(AFortPlayerControllerAthena* PlayerController, const FVector& Location, const FRotator& Rotation, bool NewPlayer = true)
    {
        APlayerPawn_Athena_C* PlayerPawn = SpawnActor<APlayerPawn_Athena_C>(APlayerPawn_Athena_C::StaticClass(), Location, Rotation);

        if (!PlayerPawn)
        {
            FN_LOG(LogPlayer, Error, "Failed to spawn PlayerPawn!");
            return nullptr;
        }

        UWorld* World = Globals::GetWorld();

        if (!World)
        {
            FN_LOG(LogPlayer, Error, "Failed to get World!");
            return nullptr;
        }

        PlayerPawn->bCanBeDamaged = (NewPlayer == true && !World->GetName().contains("Athena_Faceoff")) ? false : true;
        PlayerPawn->Owner = PlayerController;
        PlayerPawn->OnRep_Owner();

        PlayerController->Pawn = PlayerPawn;
        PlayerController->OnRep_Pawn();
        PlayerController->Possess(PlayerPawn);

        if (NewPlayer)
        {
            AFortPlayerStateAthena* PlayerState = (AFortPlayerStateAthena*)PlayerController->PlayerState;
            PlayerState->bHasFinishedLoading = true;
            PlayerState->bHasStartedPlaying = true;
            PlayerState->OnRep_bHasStartedPlaying();

            PlayerPawn->SetMaxHealth(100);
            PlayerPawn->SetHealth(100);
            PlayerPawn->SetMaxShield(100);

            // 7FF66F7BC760 (Je suis s�v�rement autiste)
            void (*SetShield)(AFortPawn* Pawn, float NewShieldValue) = decltype(SetShield)(0x116C760 + uintptr_t(GetModuleHandle(0)));

            SetShield(PlayerPawn, 0);

            PlayerController->bIsDisconnecting = false;
            PlayerController->bHasClientFinishedLoading = true;
            PlayerController->bHasServerFinishedLoading = true;
            PlayerController->bHasInitiallySpawned = true;
        }

        return PlayerPawn;
    }
};