#include <iostream>
#include <vector>

#include "print_fav_nums.h"
#include "build_arr.h"
#include "print_fav_arr_nums.h"

int main()
{
    // Pointers To Constants
    int num_1{42};
    int another_num_1{7};
    const int *fav_num_1{&num_1};
    fav_num_1 = &num_1;
    std::cout << *fav_num_1 << std::endl;
    fav_num_1 = &another_num_1;
    std::cout << *fav_num_1 << std::endl;

    // Constant Pointers
    int num_2{42};
    int *const fav_num_2_ptr{&num_2};
    std::cout << *fav_num_2_ptr << std::endl;
    *fav_num_2_ptr = 7;
    std::cout << *fav_num_2_ptr << std::endl;

    // Constant Pointers To Constants
    int num_3{42};
    const int *const fav_num_3_ptr{&num_3};
    std::cout << *fav_num_3_ptr << std::endl;

    // Pointer w/ Vector
    std::vector<int> fav_nums{42, 7};
    print_fav_nums_proc(&fav_nums);

    // Pointer w/ Array
    int *fav_arr_nums{nullptr};
    size_t size{4};
    int init_value{42};
    fav_arr_nums = build_arr(size, init_value);
    print_fav_arr_nums_proc(fav_arr_nums, size);
    delete[] fav_arr_nums;

    return 0;
}
