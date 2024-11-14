#include <iostream>
using namespace std;

class Student
{

private:
    string name;
    int roll;
    string phone;
    string address;

public:
    void setName(string n)
    {
        name = n;
    }

    void setRoll(int r)
    {
        roll = r;
    }

    void setPhone(string p)
    {
        phone = p;
    }
    void setAddress(string a)
    {
        address = a;
    }

    void info()
    {
        cout << name << endl;
        cout << roll << endl;
        cout << phone << endl;
        cout << address << endl;
    }
};

int main()
{

    Student s1, s2;

    s1.setName("Sam");
    s1.setRoll(1234);
    s1.setPhone("+8801234567892");
    s1.setAddress("Bangla Bazar");

    s1.info();

    s1.setName("John");
    s1.setRoll(1235);
    s1.setPhone("+8801234567881");
    s1.setAddress("English Bazar");

    s1.info();

    return 0;
}