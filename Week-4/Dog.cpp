#include "Dog.h"
#include <iostream>

Dog::Dog(std::string dogName) : Animal(dogName) {}

void Dog::speak() {
    std::cout << name << " barks." << std::endl;
}