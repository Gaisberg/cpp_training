#include <string>
#include <iostream>

class Dog
{
    private:
        std::string firstname, lastname;
        int idnumber;

    public:
        Dog(std::string first, std::string last, int id);
        Dog();
        ~Dog();

        std::string getName();
};