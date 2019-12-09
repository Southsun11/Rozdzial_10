#include <iostream>
#include "..\Pierwsza klasa\Stock.h"
int main()
{
    Stock tab[4] =
    {
        Stock("MAdex"),
        Stock{ "BUDPOL",29,10 },
        Stock(),
        Stock("Dominik",1000,39.20)
    };
    std::cout << "Portfele inwestycyjne " << std::endl;
    for (int i = 0; i < 4; i++)
        tab[i].show();
    std::cout << "Najwieksza wartosc " << std::endl;
    const Stock * temp = &tab[0];
    for (int i = 0; i < 4; i++)
        temp = &(temp->compare(tab[i]));
    temp->show();

}
    
