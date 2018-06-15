#include "fraction.h"



Fraction::Fraction(int num, int den)
{
    numer = num;
    denom = den;
}

int Fraction::getnumer()
{
    return numer;
}

int Fraction::getdenom()
{
    return denom;
}

double Fraction::getValue()
{
    return numer * denom;
}

void Fraction::setnum(int newnum)
{
    numer=newnum;
}

void Fraction::setdenom(int den)
{
    denom=den;
}