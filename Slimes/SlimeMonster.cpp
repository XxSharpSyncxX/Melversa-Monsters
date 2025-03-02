#include "SlimeMonster.h"

// Convert Slime Type to String
std::string SlimeTypeToString(ESlimeType Type)
{
    switch (Type)
    {
    case ESlimeType::Green: return "Green";
    case ESlimeType::Blue: return "Blue";
    case ESlimeType::Red: return "Red";
    case ESlimeType::Yellow: return "Yellow";
    case ESlimeType::Clear: return "Clear";
    case ESlimeType::Gold: return "Gold";
    default: return "Unknown";
    }
}

// ✅ Convert Slime Rarity to String
std::string SlimeRarityToString(ESlimeRarity Rarity)
{
    switch (Rarity)
    {
    case ESlimeRarity::Common: return "Common";
    case ESlimeRarity::Uncommon: return "Uncommon";
    case ESlimeRarity::Rare: return "Rare";
    case ESlimeRarity::Legendary: return "Legendary";
    default: return "Unknown";
    }
}

// ✅ Convert Status Effect to String
std::string StatusEffectToString(EStatusEffect Effect)
{
    switch (Effect)
    {
    case EStatusEffect::None: return "None";
    case EStatusEffect::Poison: return "Poison";
    case EStatusEffect::Burn: return "Burn";
    case EStatusEffect::Stun: return "Stun";
    case EStatusEffect::Slow: return "Slow";
    default: return "Unknown";
    }
}

// Constructor
SlimeMonster::SlimeMonster(ESlimeType Type, ESlimeRarity Rarity)
    : SlimeType(Type), SlimeRarity(Rarity), OnHitEffect(EStatusEffect::None)  // ✅ Initialize OnHitEffect
{
    ApplyStatModifiers();
}

// ✅ Apply Stat Modifiers & Assign Status Effects
void SlimeMonster::ApplyStatModifiers()
{
    if (SlimeType == ESlimeType::Green)
    {
        Stats.BaseHP *= 1.2;
        OnHitEffect = EStatusEffect::Poison;  //  Poison on hit
    }
    else if (SlimeType == ESlimeType::Red)
    {
        Stats.BaseStrength *= 1.5;
        OnHitEffect = EStatusEffect::Burn;  //  Burn on hit
    }
    else if (SlimeType == ESlimeType::Clear)
    {
        Stats.BaseIntelligence += 1.5;
    }
    else if (SlimeType == ESlimeType::Yellow)
    {
        Stats.BaseDexterity += 1.2;
        OnHitEffect = (rand() % 2 == 0) ? EStatusEffect::Stun : EStatusEffect::Slow;  // 50% chance of Stun or Slow
    }
    else if (SlimeType == ESlimeType::Gold)
    {
        Stats.BaseLuck += 0.1;
    }

    if (SlimeRarity == ESlimeRarity::Uncommon)
    {
        Stats.BaseHP *= 1.5;
        Stats.BaseStrength *= 1.2;
        Stats.BaseIntelligence *= 1.2;
        Stats.BaseDexterity *= 1.2;
        Stats.BaseLuck *= 1.01;
    }
    else if (SlimeRarity == ESlimeRarity::Rare)
    {
        Stats.BaseHP *= 2.5;
        Stats.BaseStrength *= 2;
        Stats.BaseIntelligence *= 2;
        Stats.BaseDexterity *= 2;
        Stats.BaseLuck *= 1.03;
    }
    else if (SlimeRarity == ESlimeRarity::Legendary)
    {
        Stats.BaseHP *= 2.5;
        Stats.BaseStrength *= 2.5;
        Stats.BaseIntelligence *= 2.5;
        Stats.BaseDexterity *= 2;
        Stats.BaseLuck *= 1.05;
    }
}
// Updated PrintMonsterInfo()
void SlimeMonster::PrintMonsterInfo()
{
    std::cout << "Slime Type: " << SlimeTypeToString(SlimeType) << std::endl;
    std::cout << "Slime Rarity: " << SlimeRarityToString(SlimeRarity) << std::endl;
    std::cout << "On-Hit Effect: " << StatusEffectToString(OnHitEffect) << std::endl;
    Stats.PrintStats();
}
