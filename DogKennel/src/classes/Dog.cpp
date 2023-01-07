#include "../headers/Dog.h"

using std::cout;
using std::string;

Dog::Dog(string first, string last, int id) : firstname(first), lastname(last), idnumber(id)
{
    cout << "Constructing object with name " + getName() << std::endl;
}

Dog::Dog()
{
    cout << "Constructing object with name " + getName() << std::endl;
}

Dog::~Dog()
{
    cout << "Deconstructing object with name " + getName() << std::endl;
    
}

string Dog::getName()
{
    return firstname + " " + lastname;
}