#pragma once

namespace Abilities
{
	char (*InternalTryActivateAbility)(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle, FPredictionKey InPredictionKey, UGameplayAbility** OutInstancedAbility, void* OnGameplayAbilityEndedDelegate, const FGameplayEventData* TriggerEventData);

	FGameplayAbilitySpec* FindAbilitySpecFromHandle(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle& Ability)
	{
		FGameplayAbilitySpec* Spec = nullptr;

		for (int32 i = 0; i < AbilitySystemComponent->ActivatableAbilities.Items.Num(); i++)
		{
			if (AbilitySystemComponent->ActivatableAbilities.Items[i].Handle.Handle == Ability.Handle)
			{
				return Spec = &AbilitySystemComponent->ActivatableAbilities.Items[i];
			}
		}

		return Spec;
	}

	void ApplyGameplayAbility(UClass* AbilityClass, UFortAbilitySystemComponent* AbilitySystemComponent)
	{
		if (!AbilityClass || !AbilitySystemComponent)
			return;

		FGameplayAbilitySpec AbilitySpec;
		AbilitySpec.CreateDefaultAbilitySpec((UGameplayAbility*)AbilityClass->CreateDefaultObject(), 1, -1, nullptr);

		for (int32 i = 0; i < AbilitySystemComponent->ActivatableAbilities.Items.Num(); i++)
		{
			auto& CurrentSpec = AbilitySystemComponent->ActivatableAbilities.Items[i];

			if (CurrentSpec.Ability == AbilitySpec.Ability)
				return;
		}

		FGameplayAbilitySpecHandle Handle;
		AbilitySystemComponent->GiveAbility(&Handle, AbilitySpec);
	}

	void GrantGameplayAbility(UFortAbilitySet* AbilitySet, UFortAbilitySystemComponent* AbilitySystemComponent)
	{
		if (!AbilitySet || !AbilitySystemComponent)
			return;

		for (int32 i = 0; i < AbilitySet->GameplayAbilities.Num(); i++)
		{
			TSubclassOf<UFortGameplayAbility> GameplayAbility = AbilitySet->GameplayAbilities[i];

			if (!GameplayAbility.Get())
				continue;

			ApplyGameplayAbility(GameplayAbility, AbilitySystemComponent);
		}
	}

	void GrantGameplayEffect(UFortAbilitySet* AbilitySet, UFortAbilitySystemComponent* AbilitySystemComponent)
	{
		if (!AbilitySet || !AbilitySystemComponent)
			return;

		for (int32 i = 0; i < AbilitySet->GrantedGameplayEffects.Num(); i++)
		{
			FGameplayEffectApplicationInfoHard* GrantedGameplayEffect = &AbilitySet->GrantedGameplayEffects[i];
			if (!GrantedGameplayEffect) continue;

			FGameplayEffectContextHandle EffectContext{};
			AbilitySystemComponent->BP_ApplyGameplayEffectToSelf(GrantedGameplayEffect->GameplayEffect, GrantedGameplayEffect->Level, EffectContext);
		}
	}

	void GrantModifierAbility(UFortGameplayModifierItemDefinition* ModifierItemDefinition, UFortAbilitySystemComponent* AbilitySystemComponent)
	{
		for (int32 i = 0; i < ModifierItemDefinition->PersistentAbilitySets.Num(); i++)
		{
			FFortAbilitySetDeliveryInfo* PersistentAbilitySets = &ModifierItemDefinition->PersistentAbilitySets[i];
			if (!PersistentAbilitySets) continue;

			for (int32 j = 0; j < PersistentAbilitySets->AbilitySets.Num(); j++)
			{
				UFortAbilitySet* AbilitySet = Functions::LoadAbilitySet(PersistentAbilitySets->AbilitySets[j]);

				GrantGameplayAbility(AbilitySet, AbilitySystemComponent);
				GrantGameplayEffect(AbilitySet, AbilitySystemComponent);
			}
		}
	}

	void GrantModifierAbilityFromPlaylist(UFortAbilitySystemComponent* AbilitySystemComponent)
	{
		UFortPlaylistAthena* PlaylistAthena = Globals::GetPlaylist();

		if (PlaylistAthena)
		{
			for (int32 i = 0; i < PlaylistAthena->ModifierList.Num(); i++)
			{
				UFortGameplayModifierItemDefinition* ModifierItemDefinition = Functions::LoadGameplayModifier(PlaylistAthena->ModifierList[i]);

				if (!ModifierItemDefinition)
					continue;

				GrantModifierAbility(ModifierItemDefinition, AbilitySystemComponent);
			}
		}
	}

	void InternalServerTryActiveAbilityHook(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle, bool InputPressed, const FPredictionKey& PredictionKey, const FGameplayEventData* TriggerEventData)
	{
		FGameplayAbilitySpec* Spec = FindAbilitySpecFromHandle(AbilitySystemComponent, Handle);

		if (!Spec)
		{
			AbilitySystemComponent->ClientActivateAbilityFailed(Handle, PredictionKey.Current);
			return;
		}

		UGameplayAbility* InstancedAbility = nullptr;
		Spec->InputPressed = true;

		if (!InternalTryActivateAbility(AbilitySystemComponent, Handle, PredictionKey, &InstancedAbility, nullptr, TriggerEventData))
		{
			AbilitySystemComponent->ClientActivateAbilityFailed(Handle, PredictionKey.Current);
			Spec->InputPressed = false;
		}

		AbilitySystemComponent->ActivatableAbilities.MarkItemDirty(*Spec);
	}

	void InitAbilities()
	{
		static auto FortAbilitySystemComponentAthenaDefault = UFortAbilitySystemComponentAthena::GetDefaultObj();

		uintptr_t AddressInternalTryActivateAbility = MinHook::FindPattern(Patterns::InternalTryActivateAbility);

		InternalTryActivateAbility = decltype(InternalTryActivateAbility)(AddressInternalTryActivateAbility);

		MinHook::HookVTable(FortAbilitySystemComponentAthenaDefault, 0xF3, InternalServerTryActiveAbilityHook, nullptr, "InternalServerTryActiveAbility");

		FN_LOG(LogInit, Log, "InitAbilities Success!");
	}
}