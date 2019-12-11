#pragma once

struct customer
{
	char fullname[35];
	double payment;
};
typedef customer Item;
class Stack
{
private:
	enum  { MAX = 12 };
	Item tablica[MAX];
	int top;
public:
	Stack();
	bool isempty() const ;
	bool isfull() const ;
	bool push(const Item & item);
	bool pop(Item& item);
};

