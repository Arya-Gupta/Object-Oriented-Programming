#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // static variable

    public:
        void setData(){
            cout << "Enter the id: ";
            cin >> id;
            count++;
        }
        void getData(){
            cout << "Id is " << id << " and employee number is " << count << endl;
        }

        static void getCount(){
            // cout << id; --> Static member functions are allowed to access only the static data members or other static member functions, they can not access the non-static data members or member functions of the class
            cout<<"There are " << count << " employees." << endl;
        }
};

int Employee :: count; // Default value is 0 --> static variable inside a class should be initialized explicitly by the user using the class name and scope resolution operator OUTSIDE the class

int main()
{
    Employee adam, claire, mark;
    // adam.count = 10; --> cannot access count as it is private

    adam.setData();
    adam.getData();
    Employee :: getCount();

    claire.setData();
    claire.getData();
    Employee :: getCount();

    mark.setData();
    mark.getData();
    Employee :: getCount();

    return 0;
}