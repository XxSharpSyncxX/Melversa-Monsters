#include "SlimeStats.h"
#include <iostream>

void FBaseSlimeStats::PrintStats() const
{
    std::cout << "HP: " << GetHP() << std::endl;
    std::cout << "Strength: " << GetStrength() << std::endl;
    std::cout << "Intelligence: " << GetIntelligence() << std::endl;
    std::cout << "Dexterity: " << GetDexterity() << std::endl;
    std::cout << "Luck: " << GetLuck() << std::endl;

}
