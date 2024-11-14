#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x;
    cout << "Enter a number: ";
    cin >> x;

    // Ceil, Floor, Round
    int ans_ceil = ceil(x);
    int ans_floor = floor(x);
    int ans_round = round(x);
    cout << "Ceil: " << ans_ceil << endl;
    cout << "Floor: " << ans_floor << endl;
    cout << "Round: " << ans_round << endl;

    // Square root
    double ans_sqrt = sqrt(x);
    cout << "Square root: " << fixed << setprecision(2) << ans_sqrt << endl;

    // Power
    int a, b;
    cout << "Enter two numbers for power calculation: ";
    cin >> a >> b;
    int ans_pow = pow(a, b);
    cout << "Result of " << a << "^" << b << ": " << ans_pow << endl;

    // Absolute value
    int y;
    cout << "Enter a number for absolute value calculation: ";
    cin >> y;
    int ans_abs = abs(y);
    cout << "Absolute value: " << ans_abs << endl;

    return 0;
}
