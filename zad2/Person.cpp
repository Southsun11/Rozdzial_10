#include "Person.h"
#include <cstring>;
#include <iostream>;
Person::Person()
{
	lname = "temptorary_lname";
	strncpy_s(fname, "temporary_fname", 256);
	
}
Person::Person(const std::string& ln, const char* fn)
{
	lname = ln;
	strncpy_s(fname, fn, 256);
}
void Person::show() const
{
	std::cout << fname << " " << lname << std::endl;

}
void Person::FormalShow() const
{
	std::cout << lname << " " << fname << std::endl;
}