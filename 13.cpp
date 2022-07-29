#include<iostream>
using namespace std;

class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
        BankDeposit(){} // We need this constructor in case we do not pass values for p, y and r
        BankDeposit(int p, int y, float r); // r can be a value like 0.04
        BankDeposit(int p, int y, int r); // r can be a value like 14
        void show();
};

BankDeposit :: BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++){
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for(int i = 0; i < y; i++){
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit :: show(){
    cout << endl << "Principal amount was " << principal << ". Return value after " << years << " years is " << returnValue << endl;
}

int main(){
    BankDeposit bd1, bd2, bd3;
    int p, y, R;
    float r;
    
    // SI = P * R * T
    cout << "Enter the value of p y and r" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    // SI = P * R * T / 100
    cout << "Enter the value of p y and R" << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}