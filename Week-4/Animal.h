#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
public:
    Animal(std::string animalName);
    void speak();
protected:
    std::string name;
};

#endif // ANIMAL_H