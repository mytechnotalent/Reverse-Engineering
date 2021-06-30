#include <iostream>
#include <vector>

#include "print_fav_nums_by_value.h"
#include "data.h"
#include "generate_random_number.h"
#include "sum.h"
#include "mathi.h"

int main()
{
    // Pass By Value
    int favorite_number {42};
    std::cout << "main favorite_number Value: ";
    std::cout << favorite_number << std::endl;
    std::cout << "main favorite_number Address: ";
    std::cout << &favorite_number << std::endl;
    print_fav_nums_by_value_proc(favorite_number);
    std::cout << "main favorite_number Value: ";
    std::cout << favorite_number << std::endl;
    std::cout << "main favorite_number Address: ";
    std::cout << &favorite_number << std::endl;

    // Pass By Reference
    std::vector<int> fav_nums;
    populate(fav_nums);
    print_fav_nums_proc(fav_nums);
    std::cout << "main fav_nums Address: ";
    std::cout << &fav_nums << std::endl;

    // Function Return Values
    int random_number {};
    random_number = generate_random_number(2, 55);
    std::cout << random_number << std::endl;

    // Function Default Argument Values
    int total {};
    total = sum(42);
    std::cout << total << std::endl;

    // Function Overloading
    int int_total {};
    double double_total {};
    int_total = add(42, 42);
    double_total = add(42.42, 42.42);
    std::cout << int_total << std::endl;
    std::cout << double_total << std::endl;

    return 0;
}
