#pragma once

#include <iostream>

/**
 * Employee class to handle basic employee information
 */
class Employee 
{
  private:
    int salary;

  public:
    /**
     * The set_salary method to handle setting the employee salary
     * @param m_salary  Salary
     */
    void set_salary(int m_salary); 
    
    /**
     * The get_salary method to handle getting the employee salary
     * @returns salary  Salary
     */
    inline int get_salary() { return salary; }
};

