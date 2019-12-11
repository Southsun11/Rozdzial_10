#include "Plorg.h"
#include <iostream>

int main()
{
    Plorg temp1;
    Plorg temp2("Dominik", 39);
    temp1.show();
    temp2.show();
    temp1.zmien_sytosc(23);
    temp1.show();
}
