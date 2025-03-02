#pragma once

enum class ESlimeType
{
    Green,
    Blue,
    Red,
    Yellow,
    Clear,
    Gold
};

enum class ESlimeRarity
{
    Common,
    Uncommon,
    Rare,
    Legendary
};

// ✅ Ensure this is in `SlimeTypes.h`
enum class EStatusEffect
{
    None,
    Poison,
    Burn,
    Stun,
    Slow
};
