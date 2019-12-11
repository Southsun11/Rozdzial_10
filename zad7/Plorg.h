#pragma once
#include <cstring>
class Plorg
{
private:
	char name[19];
	int sytosc;
public:
	Plorg(const char* n = "Plorga", int s = 50) { strncpy_s(name, n, 19);sytosc = s;}
	void zmien_sytosc(int s) { sytosc = s; }
	void show() const;

};

