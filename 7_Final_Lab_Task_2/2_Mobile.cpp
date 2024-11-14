#include <iostream>
using namespace std;
class Mobile
{
private:
    int lock;
    string name;
    string number;
    float balance;
    string moname;
    int recharge;
    int CallSomeone;
    float callcost;

public:
    Mobile()
    {
        lock = 0;
        name = "";
        number = "";
        balance = 0;
        moname = "";
        recharge = 0;
        CallSomeone = 0;
        callcost = 0;
    }
    Mobile(int a, string na, string num, float bal, string mon, int rec, int call)
    {
        lock = a;
        name = na;
        number = num;
        balance = bal;
        moname = mon;
        recharge = rec;
        CallSomeone = call;
        callcost = call * 0.5;
    }

    ~Mobile() {}
    void setlock(int a)
    {
        lock = a;
    }

    void setname(string na)
    {
        name = na;
    }
    string setnumber(string num)
    {
        number = num;
    }
    float setbalance(float bal)
    {
        balance = bal;
    }
    string setmoname(string mon)
    {
        moname = mon;
    }
    int setrecharge(int rec)
    {
        recharge = rec;
    }
    int setcall(int call)
    {
        CallSomeone = call;
    }
    float setcallcost(float call)
    {
        callcost = call * 0.5;
    }

    bool getlock()
    {
        return lock;
    }
    string getname()
    {
        return name;
    }
    string getnumber()
    {
        return number;
    }
    float getbalance()
    {
        return balance;
    }
    string getmoname()
    {
        return moname;
    }
    int getrecharge()
    {
        return recharge;
    }
    int getcall()
    {
        return CallSomeone;
    }
    float getcallcost()
    {
        return callcost;
    }
    /*void getlock(){
    return lock;}*/

    void showmobileinfo()
    {
        cout << "Lock: " << lock << endl;
        cout << "Name: " << name << endl;
        cout << "Number: " << number << endl;
        cout << "Balance: " << balance << endl;
        cout << "Mobile Name: " << moname << endl;
        cout << "Total cost: " << callcost << endl;
    }
};

int main()
{
    Mobile ob1;
    Mobile ob2(1234, "Akash", "123456", 35, "Java", 35, 5);
    ob2.showmobileinfo();
    cout << "Lock: " << ob2.getlock() << endl;
    cout << "Name: " << ob2.getname() << endl;
    cout << "Number: " << ob2.getnumber() << endl;
    cout << "Balance: " << ob2.getbalance() << endl;
    cout << "Mobile Name: " << ob2.getmoname() << endl;
    cout << "Total cost: " << ob2.getcallcost() << endl;

    return 0;
}
bool clock(int lock)
{
    if (lock == 1234)
    {
        return true;
    }
    else
    {
        return false;
    }
}