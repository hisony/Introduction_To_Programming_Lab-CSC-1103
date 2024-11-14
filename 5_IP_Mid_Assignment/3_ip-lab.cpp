#include <iostream>
#include <math.h>

using namespace std;

int main()

{

    float l, w, r, b, h;

    char n;

    cout << " 1. Area of Circle" << endl;
    cout << " 2. Area of Rectangle" << endl;
    cout << " 3. Area of Triangle" << endl;
    cout << " 4. Area of Square" << endl;

    cout << " Choose a option : ";
    cin >> n;

    switch (n)
    {
    case '1':

        cout << " Enter  radius : ";
        cin >> r;
        cout << " Area of circle : " << 3.1416 * r * r << endl;
        break;
    case '2':

        cout << " Enter  length : ";
        cin >> l;
        cout << " Enter  width : ";
        cin >> w;
        cout << " Area of rectangle : " << l * w << endl;
        break;
    case '3':

        cout << " Enter  base : ";
        cin >> b;
        cout << " Enter  height : ";
        cin >> h;
        cout << " Area of triangle : " << 0.5 * b * h << endl;
        break;
    case '4':

        cout << " Enter length : ";
        cin >> l;
        cout << " Area of square : " << l * l << endl;
        break;
    }

    return 0;
}