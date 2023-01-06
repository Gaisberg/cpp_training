// #include "headers/Dog.h"
#include "headers/Barker.h"

using std::string;

int main()
{
    Dog d1("Siri", "Koira", 1);
    {
        Barker b1("Saga", "Koira", 2, 3000);
        string name = b1.getName();
    }

    return 0;
}