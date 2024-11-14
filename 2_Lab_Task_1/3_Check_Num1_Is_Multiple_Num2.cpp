#include <iostream>
using namespace std;

int main()
{
    int num1, num2, remainder;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    remainder = num1 % num2;

    if (remainder == 0)
    {
        cout << num1 << " is a multiple of " << num2;
    }
    else
    {
        cout << num1 << " is not a multiple of " << num2;
    }
    return 0;
}