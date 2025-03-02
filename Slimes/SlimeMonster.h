#pragma once
#include "SlimeStats.h"
#include "SlimeTypes.h"  // Assuming you have an enum for types
#include <iostream>
#include <string>

class SlimeMonster
{
public:
    ESlimeType SlimeType;
    ESlimeRarity SlimeRarity;
    FBaseSlimeStats Stats;
    EStatusEffect OnHitEffect; 

    // Constructor
    SlimeMonster(ESlimeType Type, ESlimeRarity Rarity);

    // Function to Apply Variations
    void ApplyStatModifiers();
    
    // Function to Print Monster Info
    void PrintMonsterInfo();

    // Convert Functions
    std::string SlimeTypeToString(ESlimeType Type);
    std::string SlimeRarityToString(ESlimeRarity Rarity);
    std::string StatusEffectToString(EStatusEffect Effect);
};
