#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{

    float num;

    cout << "  Enter marks : ";
    cin >> num;

    if (num < 0)
    {
        cout << " Invalid Mark" << endl;
    }
    else if (num > 100)
    {
        cout << " Invalid Mark" << endl;
    }

    else if (num >= 90)
    {
        cout << " Your Grade is : A+ " << endl;
        cout << " Your  point is : 4 " << endl;
    }
    else if (num >= 85)
    {
        cout << " Your Grade is : A " << endl;
        cout << " Your  point is : 3.75 " << endl;
    }
    else if (num >= 80)
    {
        cout << " Your Grade is : A- " << endl;
        cout << " Your  point is : 3.5 " << endl;
    }
    else if (num >= 75)
    {
        cout << " Your Grade is : B " << endl;
        cout << " Your  point is : 3.25 " << endl;
    }
    else if (num >= 70)
    {
        cout << " Your Grade is : C+ " << endl;
        cout << " Your  point is : 3 " << endl;
    }
    else if (num >= 65)
    {
        cout << " Your Grade is : C " << endl;
        cout << " Your  point is : 2.75 " << endl;
    }
    else if (num >= 60)
    {
        cout << " Your Grade is : D+ " << endl;
        cout << " Your  point is : 2.50 " << endl;
    }
    else if (num >= 50)
    {
        cout << " Your Grade is : D " << endl;
        cout << " Your  point is : 2.25 " << endl;
    }
    else
    {
        cout << " Your Grade is : F " << endl;
        cout << " Your  point is : 0.00 " << endl;
    }
    getch();

    return 0;
}