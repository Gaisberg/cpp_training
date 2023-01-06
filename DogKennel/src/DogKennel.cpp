#include "../headers/Dog.h"

int main()
{
    Dog d1("Siri", "Koira", 1);
    {
        Dog d2;
    }

    std::cout << "Found " + d1.getName() << std::endl;
    return 0;
}