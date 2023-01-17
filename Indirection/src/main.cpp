#include <iostream>

int main()
{
    int A = 1;
    int* pA = &A;
    *pA = 5;

    int B = 100;
    pA = &B;

    std::cout << "Is it 5 or a hundred? " << *pA << std::endl;
    std::cout << "Where did we get that value from? " << pA << std::endl;
    std::cout << "Wait, what happened to &A? " << &A << std::endl;
    std::cout << "So the value from &A ? " << *&A << std::endl;

    // Person Person=("Firstname", "Lastname", 123);
    // Person* pPerson = &Person;
    // name = (*pPerson).GetName();
    // name = pPerson->GetName();

    int* pB = nullptr;
    return 0;
}