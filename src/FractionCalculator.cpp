#include "FractionCalculator.h"

FractionCalculator::FractionCalculator()
{
    int choice = 0;
    cout << "Welcome to Fraction Calculator !" << endl;
    cout << "********************************" << endl;
    cout << "We offer basic fraction calculation functionality !" << endl;
    do{
        cout << "Our Functionality: " << endl;
        cout << "enter 1 to perform addition." << endl;
        cout << "enter 2 to perform subtraction." << endl;
        cout << "enter 3 to perform multiplication." << endl;
        cout << "enter 4 to perform division." << endl;
        cout << "enter 5 to perform fraction reduction." << endl;
        cout << "enter 6 to reset the saved value to default." << endl;
        cout << "enter 7 to change the saved value manually." << endl;
        cout << "enter 0 to end the program!" << endl;
        cin >> choice;
        switch (choice){
            case 0:
                break;
            case 1:
                Add();
                break;
            case 2:
                Sub();
                break;
            case 3:
                Mul();
                break;
            case 4:
                Div();
                break;
            case 5:
                reduce();
                break;
            case 6:
                reset(1,1);
            case 7:
                int n , d;
                cout << "enter numerator: " ;
                cin >> n;
                cout << "enter denominator: ";
                cin >> d;
                reset(n, d);
                break;
            case 8:
                Compare();
                break;
            default:
                cout << "your input is invalid, please reenter" << endl;
                break;
        }
    }while(choice != 0);
    cout << "bye" << endl;
}

FractionCalculator::~FractionCalculator()
{
    //dtor
}

void FractionCalculator::Add(){
    char c = ' ';
    cout << "add two new fractions ? (y/n)" ;
    cin >> c;
    if(c == 'y' || c == 'y'){
        Fraction F1 , F2;
        cout << "first fraction " << endl;
        cout << "***************" << endl;
        cin >> F1;

        cout << "second fraction " << endl;
        cout << "***************" << endl;
        cin >> F2;
        savedRes = F1 + F2;
    }
    else if(c == 'n' || c == 'N'){
        Fraction F;
        cout << "enter fraction " << endl;
        cout << "***************" << endl;
        cin >> F;
        savedRes = savedRes + F;
    }
    cout << savedRes ;
}

void FractionCalculator::Sub(){
    char c = ' ';
    cout << "subtract two new fractions ? (y/n)" ;
    cin >> c;
    if(c == 'y' || c == 'y'){
        Fraction F1 , F2;
        cout << "first fraction " << endl;
        cout << "***************" << endl;
        cin >> F1;

        cout << "second fraction " << endl;
        cout << "***************" << endl;
        cin >> F2;
        savedRes = F1 - F2;
    }
    else if(c == 'n' || c == 'N'){
        Fraction F;
        cout << "enter fraction " << endl;
        cout << "***************" << endl;
        cin >> F;
        savedRes = savedRes - F;
    }
    cout << savedRes ;
}

void FractionCalculator::Mul(){
    char c = ' ';
    cout << "multiply two new fractions ? (y/n)" ;
    cin >> c;
    if(c == 'y' || c == 'y'){
        Fraction F1 , F2;
        cout << "first fraction " << endl;
        cout << "***************" << endl;
        cin >> F1;

        cout << "second fraction " << endl;
        cout << "***************" << endl;
        cin >> F2;
        savedRes = F1 * F2;
    }
    else if(c == 'n' || c == 'N'){
        Fraction F;
        cout << "enter fraction " << endl;
        cout << "***************" << endl;
        cin >> F;
        savedRes = savedRes * F;
    }
    cout << savedRes ;
}

void FractionCalculator::Div(){
    char c = ' ';
    cout << "divide two new fractions ? (y/n)" ;
    cin >> c;
    if(c == 'y' || c == 'y'){
        Fraction F1 , F2;
        cout << "first fraction " << endl;
        cout << "***************" << endl;
        cin >> F1;

        cout << "second fraction " << endl;
        cout << "***************" << endl;
        cin >> F2;
        savedRes = F1 / F2;
    }
    else if(c == 'n' || c == 'N'){
        Fraction F;
        cout << "enter fraction " << endl;
        cout << "***************" << endl;
        cin >> F;
        savedRes = savedRes / F;
    }
    cout << savedRes ;
}

void FractionCalculator::reduce(){
    cout << "Before Reduction: " << endl;
    cout << savedRes;
    savedRes.reduce();
    cout << "After Reduction: " << endl;
    cout << savedRes;
}

void FractionCalculator::reset(int n, int d){
    savedRes.setNum(n);
    savedRes.setDenum(d);
}

void FractionCalculator::Compare(){
    char c = ' ';
    cout << "add two new fractions ? (y/n)" ;
    cin >> c;
    if(c == 'y' || c == 'y'){
        Fraction F1 , F2;
        cout << "first fraction " << endl;
        cout << "***************" << endl;
        cin >> F1;

        cout << "second fraction " << endl;
        cout << "***************" << endl;
        cin >> F2;
        savedRes = F1 * F2;
    }
    else if(c == 'n' || c == 'N'){
        Fraction F;
        cout << "enter fraction " << endl;
        cout << "***************" << endl;
        cin >> F;
        cout << (savedRes > F);
    }
    //cout << savedRes ;
}

void FractionCalculator::print(){
    cout << savedRes;
}
