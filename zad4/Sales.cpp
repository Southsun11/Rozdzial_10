#include "Sales.h"
#include <iostream>
SALES::Sales::Sales(double ar[], int n)
{
	double temp;
	for(int i = 0;i <n;i++)
		{
		for(int j=1;j <n;j++)
			
			if(ar[j-1] > ar[j])
			{
				temp = ar[j];
				ar[j] = ar[j-1];
				ar[j-1] = temp;
			}
		}
	double sum = 0;
	for (int i = 0; i < 4; i++)
	{
		sales[i] = ar[i];
		sum += sales[i];
	}
	min = sales[0];
	max = sales[3];
	average = sum / 4;
}
SALES::Sales::Sales()
{
	
	for (int i = 0; i < 4; i++)
	{
		std::cout << "Podaj dane dla kwartalu " << i + 1 << std::endl;
		while (!(std::cin >> sales[i]))
		{
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
		}
		
	}
	min = sales[0];
	max = sales[0];
	average = sales[0];
	for (int i = 1; i < 4; i++)
	{
		min = sales[i] < min ? sales[i] : min;
		max = sales[i] > max ? sales[i] : max;
		average += sales[i];
	}
	average /= 4;

}

void SALES::Sales::showSales() const
{
	for (int i = 0; i < 4; i++)
	{
		std::cout << "dane za okres " << i + 1 << ": " << sales[i] << std::endl;
	}
	std::cout << "Wartosc minimalna " << min
		<< "\nWartosc maksymalna " << max
		<< "\nSrednia " << average << std::endl;
}
