#include <iostream>

int *build_arr(size_t size, int init_value = 0)
{
    int *arr{nullptr};
    arr = new int[size];
    for (size_t i{0}; i < size; ++i)
        arr[i] = init_value++;
    return arr;
}
