#pragma once
#include <string>
using namespace std;
class AbstractHugeNumber
{
protected : 
	string hugeNumAsString;
public:
	virtual double Convert() = 0; // return stod(hugeNumAsString);
	virtual operator double() = 0;
	
	virtual AbstractHugeNumber* operator+(AbstractHugeNumber& other) = 0;
	virtual operator string() { return GetStringAsNumber();	}
	virtual string& GetStringAsNumber() { return hugeNumAsString; }
};
