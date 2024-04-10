#include "PlainHugeNumber.h"

PlainHugeNumber::PlainHugeNumber(const string& numString) : AbstractHugeNumber() { hugeNumAsString = numString; }

double PlainHugeNumber::Convert() { return stod(hugeNumAsString); }

PlainHugeNumber::operator double() { return Convert(); }

AbstractHugeNumber* PlainHugeNumber::operator+(AbstractHugeNumber& other)
{
    string result = GetStringAsNumber() + static_cast<string>(other);
    return new PlainHugeNumber(result);
}