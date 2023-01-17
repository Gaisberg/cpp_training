#include <iostream>
#include <string>
#include "headers/Accum.h"
using std::string;

template <class T>
T max(T const& t1, T const& t2)
{
    return t1 < t2? t2: t1;
}

int main()
{
    std::cout << "max of 33 and 44 is " << max(33, 44) << std::endl;

    Accum integers(0);

    integers += 4;
    integers += 7;
    std::cout << "integers: " << integers.GetTotal() << std::endl;

    Accum strings(string(""));
    strings += ("Hello,");
    strings += (" World!");

    std::cout << "strings: " << strings.GetTotal() << std::endl;
    
    Accum<Person> people(0);
    Person p1 = Person("Seppo", 123);
    Person p2 = Person ("Kalju", 456);

    people += p1;
    people += p2;

    std::cout << "people: " << people.GetTotal() << std::endl;
    return 0;
}