#include "FractHugeNumber.h"

FractHugeNumber::FractHugeNumber(const string& numString) : AbstractHugeNumber() { hugeNumAsString = numString; }

double FractHugeNumber::Convert() { return stod(hugeNumAsString); }

FractHugeNumber::operator double() { return Convert(); }

AbstractHugeNumber* FractHugeNumber::operator+(AbstractHugeNumber& other)
{
    string result = GetStringAsNumber() + static_cast<string>(other);
    return new FractHugeNumber(result);
}