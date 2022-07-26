#include<iostream>
#include<string>
using namespace std;

class Vehicle
{
    private:
        string type;
        int wheels, power;

    public:
        int price;

        void setData(string type1, int wheels1, int power1); // This is only the declaration of this method, definition of this method is outside this class

        void getData(){
            cout << "type = " << type << endl;
            cout << "wheels = " << wheels << endl;
            cout << "power = " << power << endl;
            cout << "price = " << price << endl;
        }
};

void Vehicle :: setData(string type1, int wheels1, int power1){
    type = type1;
    wheels = wheels1;
    power = power1;
}

int main(){
    Vehicle x;
    // x.type = "Hatchback"; --> This will throw an error as type is private
    x.price = 1000;
    x.setData("Sedan", 4, 20);
    x.getData();
    return 0;
}