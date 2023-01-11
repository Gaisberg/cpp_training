#include "headers/Person.h"

Person::Person(std::string name, int id) : Name(name), Id(id) { }

// Member functions
int Person::getId() { return Id; }
void Person::setId(int number) { Id = number; }
