#include <iostream>

using namespace std;

int main()
{
    int *a = new int[5];

    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < 5; ++i)
    {
        cin >> a[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < 5; ++i)
    {
        cout << a[i] << " ";
    }
    cout << "\n";

    delete[] a;
}
