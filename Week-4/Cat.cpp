#include "Cat.h"
#include <iostream>

Cat::Cat(std::string catName) : Animal(catName) {}

void Cat::speak() {
    std::cout << name << " meows." << std::endl;
}