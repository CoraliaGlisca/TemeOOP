#include <iostream>
#include <cmath>

using namespace std;

class ComplexNumber{
public:
    double RealPart;
    double ImaginaryPart;

    ComplexNumber (double real, double imaginary){
        this -> RealPart = real;
        this -> ImaginaryPart = imaginary;
    }
    double operator ~ ( double RealPart, double ImaginaryPart){
        return sqrt(pow(RealPart,2)+pow(ImaginaryPart,2));
    }
    //double operator ^ (int power){
        //this ->
    //}
};

int main()
{
    Complex nr(25,30)
    cout << ~a;
    cout << ^a;
    return 0;
}
