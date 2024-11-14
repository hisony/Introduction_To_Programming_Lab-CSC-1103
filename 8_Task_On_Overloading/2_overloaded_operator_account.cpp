#include <iostream>
#include <string>
using namespace std;
class Account
{
public:
    string name = "";
    int balance = 0;

    Account() {}

    Account(string na, int a)
    {
        name = na;
        balance = a;
    }
    Account operator+(int n)
    {
        Account x;
        x.name = name;
        x.balance = balance + n;
        return x;
    }
    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main()
{

    Account acc("Soya", 90123);
    acc.print();
    cout << "Add amount: " << endl;
    int n;
    cin >> n;
    acc = acc + n;
    acc.print();

    return 0;
}