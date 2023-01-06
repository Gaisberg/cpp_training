#include "../headers/Dog.h"

Dog::Dog(std::string first, std::string last, int i) : firstname(first), lastname(last), id(i)
{
    std::cout << "Constructing object with id" << id << std::endl;
}

Dog::Dog()
{
    std::cout << "Constructing object with id" << id << std::endl;
}

Dog::~Dog()
{
    std::cout << "Deconstructing object with id" << id << std::endl;
    
}

std::string Dog::getName()
{
    return firstname + " " + lastname;
}