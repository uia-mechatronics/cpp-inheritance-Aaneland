#ifndef POSITION_H
#define POSITION_H


class Position
{
public:
    Position(double x, double y);
    ~Position();
    void setPosition(double XNew, double YNew);

    double getXPosition ();
    double getYPosition ();

    // Legg til get- og set-funksjoner her.

private:

    double x_;
    double y_;

};

#endif // POSITION_H
