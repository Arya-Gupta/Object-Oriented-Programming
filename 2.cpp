#include <iostream>
#include <string>
using namespace std;

class binary
{
    private:
        string s;
        void check_bin();

    public:
        void read();
        void ones_compliment();
        void display();
};

void binary :: read()
{
    cout << "Binary number: ";
    cin >> s;
}

void binary :: check_bin()
{
    for(int i = 0; i < s.length(); i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            cout << "Incorrect binary format";
            exit(0);
        }
    }
}

void binary :: ones_compliment()
{
    check_bin();
    for(int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0') s[i] = '1';
        else s[i] = '0';
    }
}

void binary :: display(void)
{
    cout << s;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin(); --> this method cannot be accessed as it is private
    b.ones_compliment();
    cout << "One's complement: ";
    b.display();
    return 0;
}