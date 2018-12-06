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
    ComplexNumber cnr;

    Operations(double number){
        this -> number = number;
    }

    Operations(double realnr, double imgnr){
        this -> cnr.RealPart = realnr;
        this -> cnr.ImaginaryPart = imgnr;
    }

    double PrintTheMod(double number){
        return sqrt(pow(number,2));
    }
    double PrintTheMod(ComplexNumber cnr){
        return sqrt(pow(cnr.RealPart,2)+pow(cnr.ImaginaryPart,2));
    }
};

int main()
{
    Operations nr(33);                            //Operations nr(12,14);
    cout << nr.PrintTheMod(nr.number);     //cout << nr.PrintTheMod(nr.cnr);

}
