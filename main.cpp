#include <iostream>
#include <ianimal.h>
#include <cat.h>
#include <dog.h>
int main()
{
    std::cout << "Hello World!" << std::endl;

    Cat Per;
    dog Hans;
    Per.move();
    Hans.move();

    Position XY(5.5, 6.5);
    std::cout<<"Posisjonen er:"<<XY.getXPosition()<<" "<<XY.getYPosition()<<std::endl;

    return 0;
}
