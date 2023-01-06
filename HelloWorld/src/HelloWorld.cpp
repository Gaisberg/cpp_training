#include <string>
#include <iostream>

int main()
{
    std::cout << "Whats your name?" << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << std::endl;
    return 0;
}
