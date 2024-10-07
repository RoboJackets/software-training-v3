#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal {
public:
    Dog(std::string dogName);
    void speak(); // Overrides speak in base class
};

#endif // DOG_H