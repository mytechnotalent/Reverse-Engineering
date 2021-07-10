#include <iostream>
#include <sstream>
#include <string>

#include "input.h"

void input_proc(int *age)
{
  bool valid = false;
  char null = '\0';
  while (!valid)
  {
    std::cout << "Enter Age: ";
    std::string line;
    getline(std::cin, line);
    std::stringstream is(line);
    if (!(is >> *age) || (is >> std::ws && is.get(null)) || *age >= 100 || *age <= 0)
      std::cout << "Dude be real!" << std::endl;
    else
      valid = true;
  }
}
