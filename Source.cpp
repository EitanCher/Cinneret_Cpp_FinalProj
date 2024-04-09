#include "AbstractHugeNumber.h"
#include "PlainHugeNumber.h"
#include "FractHugeNumber.h"
#include <iostream>
using namespace std;
int main()
{
	
	string s1 = "2";
	for (int i = 0; i < 6; i++)
		s1 += "0";
	AbstractHugeNumber* r1 = new PlainHugeNumber(s1);
	double d1 = *r1;
	cout << " val of huge number is " << d1 << endl;
	AbstractHugeNumber* r2 = new PlainHugeNumber("3456");
	double d2 = *r2;
	cout << " val of huge number is " << d2 << endl;
	AbstractHugeNumber* sum = *r1 + *r2;
	double d3 = *sum;
	delete r1;
	delete r2;
	delete sum;
	AbstractHugeNumber* rf1 = new FractHugeNumber("123456.789");
	AbstractHugeNumber* rf2 = new FractHugeNumber("123456.789");
	cout << "sum of fract numbers is " << (*rf1 + *rf2);
	return 0;
}


