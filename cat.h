#ifndef CAT_H
#define CAT_H
#include <iostream>

#include "ianimal.h"
#include "ipositionprovider.h"

class Cat : public IAnimal, public IPositionProvider
{
public:
    Cat();

    // IPositionProvider interface
    Position getPosition();

    // IAnimal interface
    void move();
};

#endif // CAT_H
