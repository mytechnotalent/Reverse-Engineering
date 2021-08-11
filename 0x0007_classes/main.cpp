#include <iostream>

#include "employee.h"

int main()
{
    // Get Employee Salary
    Employee alistair;
    alistair.set_salary(250000);
    std::cout << "Alistair makes $" << alistair.get_salary() << " a year!" << std::endl;

    return 0;
}
