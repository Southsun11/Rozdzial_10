#include <iostream>
#include "Sales.h"

int main()
{
    double temp[10]{ 23,412.124,2,43.5204,1,3332.435,0.213,43.234,333.327,234.5 };
    SALES::Sales s1;
    SALES::Sales s2{ temp,10 };
    s2.showSales();
    s1.showSales();
}


