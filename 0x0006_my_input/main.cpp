#include <iostream>

#include "input.h"

int main()
{
    // Input
    int age = 0;
    input_proc(&age);
    std::cout << "You are " << age << " years old and can ride the rollercoaster!" << std::endl;

    return 0;
}
