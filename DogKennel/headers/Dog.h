#include <string>
#include <iostream>

class Dog
{
    private:
        std::string firstname, lastname;
        int id;

    public:
        Dog(std::string first, std::string last, int i);
        Dog();
        ~Dog();

        std::string getName();
};