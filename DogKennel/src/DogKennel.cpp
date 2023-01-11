#include "headers/Dog.h"
#include "headers/Barker.h"

using std::string;

int main()
{
    Dog d1("Siri", "Koira", Breed::collie, 1);
    {
        Barker b1("Saga", "Koira", Breed::bordercollie, 2, 3000);
        string name = b1.getName();
        Breed breed1 = d1.getBreed();
        Breed breed2 = b1.getBreed();
    }

    return 0;
}