#include <string>

class Person
{
    private:
        std::string name;
        int id;

    public:
        Person(std::string name, int id) : name(name), id(id) {}
        int GetNumber() const { return id; };
};