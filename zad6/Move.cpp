#include "Move.h"
#include <iostream>
Move::Move(double a, double b)
{
	x = a;
	y = b;
}
void Move::showMove() const
{
	std::cout << "wartosc x: " << x << "\nwartosc y: " << y << std::endl;
}
Move Move::add(const Move& m) const
{
	Move temp;
	temp.x = this->x + m.x;
	temp.y = this->y + m.y;
	return temp;
}
void Move::reset(double a, double b)
{
	this->x = a;
	this->y = b;
}