#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;


class Fraction
{
    public:
        Fraction();
        Fraction(int, int);
        Fraction(const Fraction&);
        virtual ~Fraction();
        void reduce();
        int getNum() const;
        int getDenum() const;
        void setNum(int);
        void setDenum(int);
        Fraction operator+ (const Fraction&);
        Fraction operator- (const Fraction&);
        Fraction operator* (const Fraction&);
        Fraction operator/ (const Fraction&);
        bool operator== (const Fraction&);
        bool operator>= (const Fraction&);
        bool operator<= (const Fraction&);
        bool operator> (const Fraction&);
        bool operator< (const Fraction&);
        friend ostream& operator<< (ostream&, Fraction&);
        friend istream& operator>> (istream& , Fraction&);
    private:
        int num;
        int denum;
        int GCD(int , int);
};

#endif // FRACTION_H
