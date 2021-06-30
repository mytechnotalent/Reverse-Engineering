#include <iostream>

#include "print_fav_nums_by_value.h"

void print_fav_nums_by_value_proc(int favorite_number) 
{
    std::cout << "print_fav_nums_by_value_proc favorite_number Value: ";
    std::cout << favorite_number << std::endl;
    std::cout << "print_fav_nums_by_value_proc favorite_number Address: ";
    std::cout << &favorite_number << std::endl;
    favorite_number = 7;
    std::cout << "print_fav_nums_by_value_proc favorite_number Updated Value: ";
    std::cout << favorite_number << std::endl;
    std::cout << "print_fav_nums_by_value_proc favorite_number Address: ";
    std::cout << &favorite_number << std::endl;
}
