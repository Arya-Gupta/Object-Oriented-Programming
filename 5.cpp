#include<iostream>
using namespace std;

class complex{
    int a, b;
    static int counter;

    public: 
        void set(){
            counter++;
            a = counter;
            b = a * 10;
        }

        void setData(int num1, int num2){
            a = num1;
            b = num2;
        }

        void setDataBySum(complex o1, complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int complex :: counter;

int main(){
    complex complexArr[5];

    for(int i = 0; i < 5; i++){
        complexArr[i].set();
    }

    for(int i = 0; i < 5; i++){
        complexArr[i].printNumber();
    }

    cout << endl;

    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();
    return 0;
}