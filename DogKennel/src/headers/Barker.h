#include "Dog.h"

class Barker :
    public Dog
{
    private:
        int volume;
    public:
        Barker(std::string first, std::string last, Breed breed,
            int id, int barkvolume);
        ~Barker();
};