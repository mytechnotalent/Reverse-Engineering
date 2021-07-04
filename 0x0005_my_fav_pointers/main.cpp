#include <iostream>
#include <vector>

#include "print_fav_nums.h"

int main()
{
    // Pointer w/ Vector
    std::vector<int> fav_nums{42, 7};
    print_fav_nums_proc(&fav_nums);

    return 0;
}
