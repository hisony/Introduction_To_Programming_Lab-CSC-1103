#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[100], b[100];
    cin >> a >> b;
    int v = strcmp(a, b);
    if (v < 0)
    {
        cout << "A is smaller" << endl;
    }
    else if (v > 0)
    {
        cout << "B is smaller" << endl;
    }
    else
    {
        cout << "Same" << endl;
    }
    return 0;
}
