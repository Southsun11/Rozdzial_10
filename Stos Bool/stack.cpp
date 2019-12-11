#include "..\Stos Bool\stack.h"
#include <iostream>

Stack::Stack()
{
	top = 0;
}
bool Stack::isempty() const
{
	return top == 0;
}
bool Stack::isfull() const
{
	return top == 10;
}
bool Stack::push(const Item& item)
{
	if (!isfull())
	{
		tablica[top++] = item;
		return true;
	}
	else
	{
		std::cout << "Stos pelny, operacja przerwana" << std::endl;
		return false;
	}
		
}
bool Stack::pop(Item & item)
{
	if (!isempty())
	{
		item = tablica[--top];
		return true;
	}
	else
	{
		std::cout << "Stos pusty, operacja przerwana " << std::endl;
		return false;
	}
		

}