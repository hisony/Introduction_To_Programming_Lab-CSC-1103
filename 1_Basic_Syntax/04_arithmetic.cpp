#include <iostream>

using namespace std;

int main()
{
    int a = 3, b = 20;
    int mod = a % b;
    cout << "Modulus: " << mod << endl;

    int sum = a + b;
    int diff = b - a;
    int product = a * b;
    double quotient = static_cast<double>(b) / a; // convert to double
    int increment = ++a;
    int decrement = --b;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Increment: " << increment << endl;
    cout << "Decrement: " << decrement << endl;

    return 0;
}
