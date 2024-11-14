#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[200], b[100];
    cin >> a >> b;
    strcat(a, b);
    cout << a << " " << b << endl;
    return 0;
}
