#pragma once
#include <iostream>

struct FBaseSlimeStats
{
    // Base Stats
    float BaseHP;
    float BaseStrength;
    float BaseIntelligence;
    float BaseDexterity;
    float BaseLuck;

    // Constructor (Correctly placed inside the struct)
    FBaseSlimeStats()
        : BaseHP(10), BaseStrength(5), BaseIntelligence(5), BaseDexterity(2), BaseLuck(0) {}

    // Formulas for stat point values
    float GetHP() const { return BaseHP * 10; }
    float GetStrength() const { return BaseStrength * 2; }
    float GetIntelligence() const { return BaseIntelligence * 2; }
    float GetDexterity() const { return BaseDexterity * 2.5; }
    float GetLuck() const { return BaseLuck * 0.2f; }

    // Debug Print Function
    void PrintStats() const;
};
