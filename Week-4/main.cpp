#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main() {
    Animal animal("Generic Animal");
    animal.speak();

    Dog dog("Buddy");
    dog.speak();

    Cat cat("Whiskers");
    cat.speak();

    return 0;
}