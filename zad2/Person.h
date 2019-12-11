#pragma once
#include <string>
class Person
{
private:
	static const int LIMIT = 256;
	std::string lname;
	char fname[LIMIT];
public:
	Person();
	Person(const std::string& ln, const char* fn = "HejTy");
	void show()const;
	void FormalShow() const;
};

