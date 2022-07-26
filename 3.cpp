#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter; // counts the no of items in the shop

    public:
        void initCounter(){ 
            counter = 0; 
        }

        void setPrice();
        void displayPrice();
};

void Shop :: setPrice()
{
    cout << "Enter id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop :: displayPrice()
{ 
    for(int i = 0; i < counter; i++)
        cout << "The Price of item with id " << itemId[i] << " is " << itemPrice[i] << endl;
}

int main()
{
    Shop myShop;
    myShop.initCounter();
    myShop.setPrice();
    myShop.setPrice();
    myShop.setPrice();
    myShop.displayPrice();
    return 0;
}