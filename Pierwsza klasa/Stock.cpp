#include "Stock.h"
#include <iostream>


Stock::Stock()
{
	std::cout << "Konstruktor domyslny " << std::endl;
	company = "bez nazwy";
	shares = 0;
	share_val = 0;
	total_val = 0;
}
Stock::Stock(const std::string& co, long n, double pr )
{
	std::cout << "konstruktor z argumentem " << co << std::endl;
	company = co;
	if (n < 0)
	{
		std::cout << "Liczba udzialow nie moze byc ujemna, ustalam liczbe udzialow na 0 " << std::endl;
		shares = 0;

	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}

Stock::~Stock()
{
	std::cout << "Destruktor" << company << std::endl;
}

void Stock::buy(long num, double price)
{
	if (num < 0)
		std::cout << "Liczba nabywcow udzialow nie moze byc ujemna. Transakcja przerwana" << std::endl;
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	if (num < 0)
		std::cout << "Liczba sprzedawcow udzialow nie moze byc ujemna. Transakcja przerwana" << std::endl;
	else if (num > shares)
		std::cout << "Nie mozesz sprzedac wiecej udzialow nie posiadasz. Transakcja przerwana" << std::endl;
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void Stock::show() const
{
	std::cout << "Spolka " << company
		<< " Liczba udzialow " << shares << '\n'
		<< "Cena udzialu " << share_val << '\n'
		<< "Laczna liczba udzialow " << total_val << std::endl;

}

const Stock& Stock::compare(const Stock& s) const
{
	if (s.total_val > this->total_val)
		return s;
	else return *this;
}