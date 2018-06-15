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
    return numer / (double)denom;
}

void Fraction::setnum(int newnum)
{
    numer=newnum;
}

void Fraction::setdenom(int den)
{
    denom=den;
}


Fraction& Fraction:: operator+(Fraction& rhs)
{
    int commondenom = this->getdenom() * rhs.getdenom();
    int newnumer = this->getnumer() * rhs.getdenom() + this->getdenom() * rhs.getnumer();
    Fraction *sum = new Fraction(newnumer, commondenom);
    return *sum;

}