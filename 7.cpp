#include<iostream>
using namespace std;

// Forward declaration
class Complex; // If we do not do this, we cannot create methods of class Calculator that take Complex arguments

class Calculator
{
    public:
        int add(int a, int b){
            return (a + b);
        }

        int sumRealComplex(Complex, Complex); // We are not defining the function here because we have only declared the function Complex before this and not its whole definition, so we cannot access its members
        int sumCompComplex(Complex, Complex);
};

class Complex{
    int a, b;
    // Individually declaring functions as friends
    // friend int Calculator :: sumRealComplex(Complex, Complex); --> used to give permission to a specific function
    // friend int Calculator :: sumCompComplex(Complex, Complex);

    // Alternate: Declaring the entire Calculator class as friend
    friend class Calculator;

    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }

        void printNumber(){
            cout << "Your number is " << a << " + " << b << "i" << endl;
        }
};

int Calculator :: sumRealComplex(Complex o1, Complex o2){
    return (o1.a + o2.a);
}

int Calculator :: sumCompComplex(Complex o1, Complex o2){
    return (o1.b + o2.b);
}

int main(){
    Complex c1, c2;
    c1.setNumber(1, 4);
    c2.setNumber(5, 7);

    Calculator calc;
    int resr = calc.sumRealComplex(c1, c2);
    cout << "The sum of real part of c1 and c2 is " << resr << endl;

    int resc = calc.sumCompComplex(c1, c2);
    cout << "The sum of complex part of c1 and c2 is " << resc << endl;
    return 0;
}