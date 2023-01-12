#include "headers/Operators.h"

Operators::Operators(int i) : i(i)
{

}

int Operators::getInteger() const
{
    return i;
}

bool Operators::operator<(Operators const& o) const
{
    return i < o.i;
}

bool Operators::operator<(int integer) const
{
    return i < integer;
}

bool operator<(int integer, Operators const& o)
{
    return integer < o.i;
}

int main()
{
    //Shortcuts
    int x = 1;
    x += 2;
    x -= -2;
    x *= 4;
    x /= 5;

    // bitwise operators
    bool b1 = 4 & 1;
    b1 = 4 | 1;
    b1 = 4 ^ 2;

    // bit shift operators
    // 0b001 = 1
    // 0b100 = 4
    int bs = 1 << 2;
    bool is_equal = 0b100 == bs; 

    // operator overloading
    Operators o = Operators(100);
    bool overloader = o < 1000;
    Operators o2 = Operators(1);
    overloader = o < o2;
    overloader = 1 < o;

    return 0;
}