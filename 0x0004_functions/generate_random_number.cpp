#include <cstdlib>
#include <ctime>

#include "generate_random_number.h"

int generate_random_number(int min, int max) 
{
    int random_number {};
    srand(time(nullptr));
    random_number = rand() % max + min;
    return random_number;
}
