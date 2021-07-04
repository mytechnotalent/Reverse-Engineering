#include <iostream>
#include <vector>

#include "print_fav_nums.h"

void print_fav_nums_proc(const std::vector<int> *const fav_nums)
{
    for (auto fav_num : *fav_nums)
        std::cout << fav_num << std::endl;
}
