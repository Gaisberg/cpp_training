#include <string>

class Person
{
    private:
        std::string const Name;
        int Id;
    
    public:
        Person(std::string const Name, int id);
        int getId();
        void setId(int i);
};