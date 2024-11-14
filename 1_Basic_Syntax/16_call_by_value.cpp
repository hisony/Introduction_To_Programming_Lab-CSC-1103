#include <iostream>

using namespace std;

void fun(int x)
{
    x = 200;
}

int main()
{
    int x = 10;
    // cout << "main x er address - " << &x << endl;
    fun(x);
    cout << "main er x er value - " << x << endl;
    return 0;
}
