#include <iostream>

#include "hero.h"

int main()
{
    // Get Hero Strength
    Hero alistair;
    alistair.set_strength(10000000);
    std::cout << "Alistair has " << alistair.get_strength() << " strength!" << std::endl;

    return 0;
}
