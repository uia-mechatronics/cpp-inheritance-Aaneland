#ifndef DOG_H
#define DOG_H

#include "ianimal.h"
#include "ipositionprovider.h"



class dog : public IAnimal, public IPositionProvider
{
public:
    dog();

    // IPositionProvider interface
public:
    Position getPosition();

    // IAnimal interface
public:
    void move();
};

#endif // DOG_H
