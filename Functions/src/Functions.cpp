#include <iostream>
#include "headers/Person.h"

int plusOne(int i) { return i + 1; }

// Passing a reference to a function is usually done to improve performance
// when passing large objects. With a type like int this is not the case...
int plusRefOne(int& i) {
    i =  i + 1; 
    return i;
}

// Dont return a reference outside its scope, usually bad practice...
// int& badFunction(int x)
// {
//     x = 2;
//     return x;
// }

int main()
{
    int i = 1;
    std::cout << plusOne(i) << std::endl;
    std::cout << plusRefOne(i) << std::endl;
    std::cout << plusOne(i) << std::endl;
    // std::cout << badFunction(i) << std::endl;

    Person person = Person("Pekka Pouta", 1);
    std::cout << "Person id before member function: " << person.getId() << std::endl;
    person.setId(2);
    std::cout << "Person id after member function: " << person.getId() << std::endl;

    return 0;
}