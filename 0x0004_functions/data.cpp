#include <iostream>
#include <vector>

#include "data.h"

void populate(std::vector<int> &fav_nums) 
{
    // I don't call this function a proc as this output is for teaching purposes
    // otherwise by my convention dealing with I/O in a function is a proc
    std::cout << "populate fav_nums Address: ";
    std::cout << &fav_nums << std::endl;
    fav_nums.push_back(42);
    fav_nums.push_back(7);
}

void print_fav_nums_proc(const std::vector<int> &fav_nums) 
{
    std::cout << "print_fav_nums_proc fav_nums Address: ";
    std::cout << &fav_nums << std::endl;
    for (int i=0; i<fav_nums.size(); ++i)
        std::cout << fav_nums[i] << std::endl;
}
