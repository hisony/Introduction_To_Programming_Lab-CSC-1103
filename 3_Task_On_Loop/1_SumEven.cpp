#include <iostream>
using namespace std;
int main()
{
    int n1 = 3, n2 = 10;

    int sum = 0;
    for (int i = n1; i < n2; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    cout << sum << endl;

    return 0;
}