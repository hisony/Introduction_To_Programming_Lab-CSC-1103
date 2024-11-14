#include <iostream>

using namespace std;

int main()
{
    int ar[5];

    // Array input
    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> ar[i];
    }

    // Array output
    cout << "Array elements:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << ar[i] << endl;
    }

    return 0;
}
