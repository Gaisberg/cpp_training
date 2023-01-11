#include <iostream>

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

    return 0;

}

