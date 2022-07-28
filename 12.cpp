#include<iostream>
using namespace std;

class Abc{
    int data1, data2, data3;

    public:
        Abc(int a, int b=9, int c=8){
            data1 = a;
            data2 = b;
            data3 = c;
        }

        void printData();

};

void Abc :: printData(){
    cout<<"The value of data1, data2 and data3 is "<<data1<<", "<< data2<<" and "<< data3<<endl;
}

int main(){
    Abc p(12, 13);
    p.printData();
    Abc q(1);
    q.printData();
    return 0;
}