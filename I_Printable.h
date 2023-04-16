#pragma once
#include <iostream>
using namespace std;

class I_Printable
{
	friend ostream& operator<<(ostream& os, const I_Printable& print);
public:
	virtual void print(ostream& os)const = 0;

	virtual ~I_Printable() = default;
};

