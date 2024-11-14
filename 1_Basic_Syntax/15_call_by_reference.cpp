#include <iostream>

using namespace std;

void fun(int &p)
{
    // cout << "main er x er value - " << p << endl;
    p = 500;
}

int main()
{
    int x = 100;
    // cout << "x er address - " << &x << endl;
    fun(x);
    cout << x;
    return 0;
}
