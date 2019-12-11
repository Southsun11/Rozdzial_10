#include "Bank_account.h"
#include <cstring>
#include <iostream>
Bank_account::Bank_account()
{
	strncpy_s(name,"brak nazwy",30);
	number = 0;
	saldo = 0;

}
Bank_account::Bank_account(const char* c, unsigned long l , double s )
{
	strncpy_s(name,c,30);
	number = l;
	saldo = s;
}
void Bank_account::show() const
{
	std::cout << "nazwisko: " << name
		<< "\nnumer konta: " << number
		<< "\nsaldo" << saldo << std::endl;
}
void Bank_account::wplac(double s)
{
	saldo += s;
	std::cout << "wplacono " << s << " zlotych" << std::endl;
}
void Bank_account::wyplac(double s)
{
	if ((saldo - s) > 0)
	{
		saldo -= s;
		std::cout << "Wyplacono " << s << " zlotych" << std::endl;
	}

	else
		std::cout << "nie mozna wyplacic takiej sumy" << std::endl;
}