#pragma once
#include <string>
class Stock
{
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = share_val * shares; }
public:
	Stock();
	Stock(const std::string& co, long n = 0, double pr = 0);
	~Stock();
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show()const;
	const Stock& compare(const Stock&) const;

};

