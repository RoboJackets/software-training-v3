// #include <iostream>
// #include <string>

// class Animal {
// protected:
//     std::string name;

// public:
//     // Constructor
//     Animal(std::string animalName) : name(animalName) {}

//     // A function to make the animal sound
//     void makeSound() {
//         std::cout << name << " makes a sound!" << std::endl;
//     }

//     // A function to display the name of the animal
//     void displayInfo() {
//         std::cout << "This is a " << name << "." << std::endl;
//     }
// };

// // Example usage
// int main() {
//     Animal animal("Generic Animal");

//     animal.displayInfo();
//     animal.makeSound();

//     return 0;
// }

#include "Animal.h"
#include <iostream>

Animal::Animal(std::string animalName) : name(animalName) {}

void Animal::speak() {
    std::cout << name << " makes a sound." << std::endl;
}

