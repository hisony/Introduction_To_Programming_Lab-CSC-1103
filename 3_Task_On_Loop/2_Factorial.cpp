#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    long double factorial = 1.0;

        if (n < 0)
        cout << " doesn't exist.";
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;
    }

    return 0;
}