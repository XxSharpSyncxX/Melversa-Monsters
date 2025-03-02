#include "SlimeMonster.h"
#include <cstdlib>
#include <ctime>

int main()
{
    srand(static_cast<unsigned>(time(0)));

    // Generate a random Slime Type and Rarity
    ESlimeType RandomType = static_cast<ESlimeType>(rand() % 6);
    ESlimeRarity RandomRarity = static_cast<ESlimeRarity>(rand() % 3);

    SlimeMonster MySlime(RandomType, RandomRarity);
    MySlime.PrintMonsterInfo();

    return 0;
}

