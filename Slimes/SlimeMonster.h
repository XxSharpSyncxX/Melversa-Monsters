#pragma once
#include "SlimeStats.h"
#include "SlimeTypes.h"  // Assuming you have an enum for types
#include <iostream>

class SlimeMonster
{
public:
    ESlimeType SlimeType;
    ESlimeRarity SlimeRarity;
    FBaseSlimeStats Stats;

    // Constructor
    SlimeMonster(ESlimeType Type, ESlimeRarity Rarity);

    // Function to Apply Variations
    void ApplyStatModifiers();
    
    // Function to Print Monster Info
    void PrintMonsterInfo();
};
