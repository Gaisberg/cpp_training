#include "../headers/Barker.h"

using std::string;

Barker::Barker (string first, string last, 
        int id, int barkvolume) 
    :
    Dog(first, last, id),
    volume(barkvolume)
{
    std::cout << "Constructing barker with bark volume " << std::to_string(volume) << std::endl;
}

Barker::~Barker()
{
    std::cout << "Deonstructing barker with bark volume " << std::to_string(volume) << std::endl;
}