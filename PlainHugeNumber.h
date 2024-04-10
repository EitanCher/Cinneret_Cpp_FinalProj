#pragma once
#include "AbstractHugeNumber.h"

class PlainHugeNumber : public AbstractHugeNumber
{
public:
    PlainHugeNumber(const string& numString);
    double Convert() override;
    operator double() override;
    AbstractHugeNumber* operator+(AbstractHugeNumber&) override;
};
