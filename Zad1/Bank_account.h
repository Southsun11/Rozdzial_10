#pragma once
class Bank_account
{
private:
	char name[30];
	unsigned long number;
	double saldo;
public:
	Bank_account();
	Bank_account(const char*, unsigned long, double s = 0);
	void show() const;
	void wplac(double);
	void wyplac(double);
};

