#include "Fraction.h"

Fraction::Fraction()
{
    num = denum = 1;
}

Fraction::Fraction(int n, int d){
    num = n;
    denum = d;
}

Fraction::Fraction(const Fraction& F){
    num = F.getNum();
    denum = F.getDenum();
}

Fraction::~Fraction()
{
    //dtor
}

int Fraction::GCD(int n1 , int n2){
    while(n1 != n2){
        if(n1 > n2){
            n1 -= n2;
        }
        else{
            n2 -= n1;
        }
    }
    return n1;
}

int Fraction::getNum() const{
    return num;
}

int Fraction::getDenum() const{
    return denum;
}

void Fraction::setNum(int n){
    num = n;
}

void Fraction::setDenum(int d){
    denum = d;
}

void Fraction::reduce(){
    int gcd = GCD(num,denum);
    num /= gcd;
    denum /= gcd;
}

Fraction Fraction::operator+(const Fraction & F){
    int d = denum * F.getDenum();
    int n1 = num * F.getDenum();
    int n2 = F.getNum() * denum;
    Fraction res( n1 + n2, d);
    res.reduce();
    return res;
}

Fraction Fraction::operator-(const Fraction & F){
    int d = denum * F.getDenum();
    int n1 = num * F.getDenum();
    int n2 = F.getNum() * denum;
    Fraction res( n1 - n2, d);
    res.reduce();
    return res;
}

Fraction Fraction::operator*(const Fraction & F){
    int n = num * F.getNum();
    int d = denum * F.getDenum();
    Fraction res(n, d);
    res.reduce();
    return res;
}

Fraction Fraction::operator/(const Fraction & F){
    int n = num * F.getDenum();
    int d = denum * F.getNum();
    Fraction res(n, d);
    res.reduce();
    return res;
}

bool Fraction::operator<(const Fraction& F){
    int n1 = num * F.getDenum();
    int n2 = F.getNum() * denum;
    return n1 < n2;
}

bool Fraction::operator>(const Fraction& F){
    int n1 = num * F.getDenum();
    int n2 = F.getNum() * denum;
    return n1 > n2;
}

bool Fraction::operator<=(const Fraction& F){
    int n1 = num * F.getDenum();
    int n2 = F.getNum() * denum;
    return n1 <= n2;
}

bool Fraction::operator>=(const Fraction& F){
    int n1 = num * F.getDenum();
    int n2 = F.getNum() * denum;
    return n1 >= n2;
}

bool Fraction::operator==(const Fraction& F){
    int n1 = num * F.getDenum();
    int n2 = F.getNum() * denum;
    return n1 == n2;
}

ostream& operator<< (ostream & out, Fraction& F){
    out << "The Fraction Value is: " << F.getNum() << " / " << F.getDenum() << endl;
    return out;
}

istream& operator>> (istream& in, Fraction& F){
    int n , d;
    while(true){
        cout << "enter numerator: " ;
        in >> n;
        cout << "enter denominator: ";
        in >> d;
        if(d != 0)
            break;
        cout << "denominator cannot be zero!" << endl;
    }
    F.setNum(n);
    F.setDenum(d);
    return in;
}
