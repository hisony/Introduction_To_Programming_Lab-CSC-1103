#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    // cout << &x << endl;
    int *p = &x;
    cout << p << endl;
    // Dereference
    cout << *p << endl;
    *p = 500;

    cout << x << endl;
    return 0;
}
