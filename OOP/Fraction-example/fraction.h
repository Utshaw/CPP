#ifndef FRACTION_H
#define FRACTION_H

// prototypes in one defintion
class Fraction{

    private:
        int numer;
        int denom;
    
    public:
        Fraction(int num, int den);
        int getnumer();
        int getdenom();
        void setnum(int newnum);
        void setdenom(int newden);
        double getValue();
};

#endif