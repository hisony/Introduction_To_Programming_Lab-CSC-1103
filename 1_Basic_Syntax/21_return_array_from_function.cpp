#include <iostream>

using namespace std;

int *fun()
{
    // Dynamically allocate memory
    int *a = new int[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return a;
}

int main()
{
    // Call the function and get the dynamically allocated array
    int *a = fun();

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";

    delete[] a;
}
