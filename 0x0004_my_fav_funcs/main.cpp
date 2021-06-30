#include <iostream>

#include "generate_random_number.h"

int main()
{
    // Generate a random number and print it
    int random_number {};
    random_number = generate_random_number(2, 55);
    std::cout << random_number << std::endl;

    return 0;
}
