#include <iostream>
#include <math.h>
#include<string.h>

using namespace std;

//1
float n;                        //declare n and isRounded...as global variables
bool isRoundedto100;

int f(float n, bool isRoundedto100=false){
    if(isRoundedto100 == true)                  //if isRounded...is true, the function will return n rounded to the nearest 100 multiple
        return round(n);

    else                                        //otherwise it returns n
        return n;

}

//2
struct Student{
    int a;
    int b;
};

Student Examenoop;

template<typename Examenoop>
Examenoop Max(Examenoop a, Examenoop b){
    return a<b ? b : a;
}

//3
int f3(int x){
    return sizeof(x);
}
int f3(double x){
    return sizeof(x);
}
int f3(char *x){
    return strlen(x);
}

//4
unsigned char f4(int a){
    if(n > 9){
        n /= 10;
        return n;
    }
    else
        return n;
}
unsigned char f4(long a){
     if(n > 9){
        n /= 10;
        return n;
    }
    else
        return n;
}

char f4(char *s){
    return s[0];
}

//5
struct nrComplex{
    double a;      //real part
    double b;      //imaginary part
};

nrComplex Modul;

template<typename Modul>
Modul fabs(Modul a, Modul b){
    return sqrt(pow(a,2)+pow(b,2));

}

//6
template <typename S>
S Sumof(S a,S b,S c){
    int sum= max(a, b);
    return max(sum, c);
}

//7
template <typename Inter>
Inter change(Inter val1,Inter val2){
    int temp;
    temp = val1;
    val1 = val2;
    val2 = temp;
    cout <<val1<<" "<<val2;
}

//8
class everybodysage{
    public:
    int age;
};

class kitty: public everybodysage{
    public:
    string name;
    string owner;
};
kitty cat;

class person : public everybodysage{
    public:
    string lastname;
    string firstname;
};
person Jesus;

class car : public everybodysage{
    public:
    string type;
    string licensenumber;
};
car trabant;

int main()
{
    cout << "Enter n= ";
    cin >> n;
    cout << f(n, false) << endl;
    cout << "\n";

    cout << Max(2,3) << endl;
    cout << Max(2.5,3.4) << endl;
    cout << Max('a','b') << endl;
    cout << Max("bb","aaaa") << endl;
    cout << "\n";

    cout << f3(764) << endl;;
    cout << f3(287.4738) <<endl;
    cout << f3("abracadabra") <<endl;
    cout << "\n";

    cout << f4(764) << endl;
    cout << f4(28747) << endl;
    cout << f4("abracadabra") << endl;
    cout << "\n";

    cout << fabs(123,354) << endl;
    cout << fabs(154,0) << endl;
    cout << "\n";

    cout << Sumof(14, 42, 79) << endl;
    cout << "\n";

    int first_value;
    int second_value;
    cout << "Enter the values you wish to interchange: ";
    cin >> first_value >> second_value;
    change(first_value, second_value);
    cout << "\n";

    return 0;
}
