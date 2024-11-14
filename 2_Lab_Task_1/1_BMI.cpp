#include <iostream>
using namespace std;
int main()
{
    float BMI, m, h;

    cout << "Enter the value of mass in kilograms :";
    cin >> m;

    cout << "Enter the value of height in meters :";
    cin >> h;

    BMI = m / (h * h);
    cout << "BMI is :" << BMI;

        return 0;
}
