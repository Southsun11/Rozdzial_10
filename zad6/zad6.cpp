#include <iostream>
#include "Move.h"

int main()
{
    Move temp1;
    Move temp2{ 2,4 };
    temp1.showMove();
    temp2.showMove();
    temp1.reset(10, 23);
    temp1.showMove();
    Move temp3 = temp1.add(temp2);
    temp3.showMove();
}
