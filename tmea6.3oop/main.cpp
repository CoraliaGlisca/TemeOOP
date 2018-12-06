#include <iostream>
#include <cmath>

using namespace std;

class ComplexNumber{
public:
    double RealPart;
    double ImaginaryPart;
};

class Operations : public ComplexNumber {
public:
    double number;
    double number2;
    ComplexNumber cnr;
    ComplexNumber cnr2;
    ComplexNumber cnr3;

    Operations(double number, double number2){
        this -> number = number;
        this -> number2 = number2;
    }

    Operations(double realnr, double imgnr, double realnr2, double imgnr2){
        this -> cnr.RealPart = realnr;
        this -> cnr.ImaginaryPart = imgnr;
        this -> cnr.RealPart = realnr2;
        this -> cnr.ImaginaryPart = imgnr2;
    }

    void addition(double number, double number2){
        double sum;
        sum = number + number2;
        cout << sum << " " << endl;
    }                                                                               //made it from double to static double
   void addition(ComplexNumber cnr, ComplexNumber cnr2){
        //ComplexNumber cnr3;
        cnr3.RealPart = cnr.RealPart + cnr2.RealPart;
        cnr3.ImaginaryPart = cnr.ImaginaryPart + cnr2.ImaginaryPart;
        cout << cnr3.RealPart << " " << cnr3.ImaginaryPart << " " << endl;
   }

    void subtraction(double number, double number2){
        double subtraction;
        subtraction = number - number2;
        cout << subtraction << " " << endl;
    }
    void subtraction(ComplexNumber cnr, ComplexNumber cnr2){
        cnr3.RealPart = cnr.RealPart - cnr2.RealPart;
        cnr3.ImaginaryPart = cnr.ImaginaryPart - cnr2.ImaginaryPart;
        cout << cnr3.RealPart << " " << cnr3.ImaginaryPart << " " << endl;
    }
    void product(double number, double number2){
        double product;
        product = number * number2;
        cout << product << " " << endl;
    }
    void product(ComplexNumber cnr, ComplexNumber cnr2){
        double product;
        product = cnr.RealPart * cnr.ImaginaryPart * cnr2.RealPart * cnr.ImaginaryPart;
        cout << product << " " << endl;
    }
    void division (double number, double number2){
        double division;
        division = number / number2;
        cout << division << " " << endl;
    }
    void division(ComplexNumber cnr, ComplexNumber cnr2){
        cnr3.RealPart = cnr.RealPart / cnr2.RealPart;
        cnr3.ImaginaryPart = cnr.ImaginaryPart / cnr2.ImaginaryPart;
        cout << cnr3.RealPart << " " << cnr3.ImaginaryPart << " " << endl;
    }
};

int main()
{
     Operations nr(33, 66);                            //Operations nr(12,14, 12, 14);
     nr.addition(nr.number, nr.number2);               // nr.addition(nr.cnr, nr.cnr2);

     nr.subtraction(nr.number, nr.number2);            //nr.subtraction(nr.cnr, nr.cnr2);

     nr.product(nr.number, nr.number2);                //nr.product(nr.cnr, nr.cnr2);

     nr.division(nr.number, nr.number2);               //nr.division(nr.cnr, nr.cnr2);
}
