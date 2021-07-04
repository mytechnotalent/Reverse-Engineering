#include <iostream>

#include "print_fav_arr_nums.h"

void print_fav_arr_nums_proc(const int *const fav_arr_nums, const size_t size)
{
    for (size_t i{0}; i < size; ++i)
        std::cout << fav_arr_nums[i] << std::endl;
}
