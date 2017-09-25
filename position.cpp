#include "position.h"



Position::Position(double x, double y)
    : x_(x)
    , y_(y)
{

}


Position::~Position()
{

}

void Position::setPosition(double XNew, double YNew)
{
    x_ = XNew;
    y_ = YNew;
}

double Position::getXPosition()
{
    return x_;
}

double Position::getYPosition()
{
    return y_;
}
