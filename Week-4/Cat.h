#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat : public Animal {
public:
    Cat(std::string catName);
    void speak(); // Overrides speak in base class
};

#endif // CAT_H