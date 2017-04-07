#ifndef FRACTIONCALCULATOR_H
#define FRACTIONCALCULATOR_H
#include <iostream>
#include "Fraction.h"

using namespace std;


class FractionCalculator
{
    private:
        Fraction savedRes;
        void Add();
        void Sub();
        void Mul();
        void Div();
        void Compare();
        void reduce();
        void reset(int, int);
    public:
        FractionCalculator();
        void print();
        virtual ~FractionCalculator();
};

#endif // FRACTIONCALCULATOR_H
