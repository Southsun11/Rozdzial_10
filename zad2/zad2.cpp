#include <iostream>
#include "Person.h"

int main()
{
    Person one;
    Person two("Staszek");
    Person three("Jacek", "Placek");
    one.show();
    one.FormalShow();
    two.show();
    two.FormalShow();
    three.show();
    two.FormalShow();
}

