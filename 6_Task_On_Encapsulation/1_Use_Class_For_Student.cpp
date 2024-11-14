#include <iostream>
using namespace std;

class Student
{

public:
    string name;
    int id;

    void info()
    {
        cout << name << endl;
        cout << id << endl;
    }
};

int main()
{
    Student s;
    s.name = "John";
    s.id = 2222;

    s.info();
    return 0;
}
