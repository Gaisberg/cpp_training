#pragma once

#include <string>
#include <iostream>
#include "Breed.h"

class Dog
{
    private:
        std::string firstname, lastname;
        Breed breed;
        int idnumber;

    public:
        Dog(std::string first, std::string last, Breed dog_breed, int id);
        Dog();
        ~Dog();

        std::string getName();
        Breed getBreed();
};