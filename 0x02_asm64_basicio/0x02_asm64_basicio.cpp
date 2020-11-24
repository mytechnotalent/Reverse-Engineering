#include <iostream>
#include <sstream>
#include <string>

int main()
{
    int age = 0;
    bool valid = false;
    char null = '\0';

    while (!valid)
    {
        std::cout << "Enter Age: ";

        // Get input as string
        std::string line;
        getline(std::cin, line);

        // Init stringstream
        std::stringstream is(line);

        // Attempt to read a valid age from the stringstream and
        // if a number can't be read, or there is more than white
        // space in the string after the number, then fail the read
        // and get another string from the user and make sure the 
        // dude is at least a year old and less than or equal to
        // 100 years old
        if (!(is >> age) || (is >> std::ws && is.get(null)) || age >= 100 || age <= 0)
            std::cout << "Dude be real!" << std::endl;
        else
            valid = true ;
    }

    std::cout << "Your are " << age << " years old, seems legit!" << std::endl;

    return 0;
}
