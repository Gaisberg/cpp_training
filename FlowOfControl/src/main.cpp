#include <iostream>
#include "headers/Thing.h"

using std::cout;
using std::cin;
using std::endl;

int main(){


    if (true) cout << "single line" << endl;
    if (true)
    {
        cout << "multiline" << endl;
    }

    int x;
    bool is_prime = true;
    cout << "Enter a positive number, lets check if its prime" << endl;
    cin >> x;

    if (x == 0 || x == 1)
    {
        is_prime = false;
    }

    for (int i=2; i<=x/2; i++)
    {
        if (x % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    if (is_prime)
        cout << "The given number is a prime number!" << endl;
    else 
        cout << "The given number is _not_ a prime number!" << endl;

    switch(Thing t1 = Thing(1); t1.getI())
    {
        case 1:
            cout << "Lets go, initialized an object in a switch!" << endl;
            break;
    }

    return 0;
}

