#include "../headers/Dog.h"

using std::cout;
using std::string;

Dog::Dog(string first, string last, Breed dog_breed, int id) : firstname(first), lastname(last), breed(dog_breed), idnumber(id)
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

Breed Dog::getBreed()
{
    return breed;
}