#include "Bank_account.h"
#include <iostream>

int main()
{
    Bank_account b1{};
    Bank_account b2{ "Dominik Momot",212344 };
    b1.show();
    b2.show();
    b2.wplac(10000);
    b2.show();
    b2.wyplac(399);
    b2.show();
}

