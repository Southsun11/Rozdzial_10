#include <iostream>
#include "Stock.h"
int main()
{
    {
        Stock stock1("Nanosmart", 20, 12.50);
        stock1.show();
        Stock stock2 = Stock("BurakPOL", 2, 2.0);
        stock2.show();
        stock2 = stock1;
        stock1.show();
        stock2.show();
        stock1 = Stock("FutroPOL", 10, 50.0);
        stock1.show();
        std::cout << "Porownanie" << std::endl;
        Stock s1 = stock1.compare(stock2);
        s1.show();
    }

}
