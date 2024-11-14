#include <iostream>

using namespace std;

int main()
{
    int ar[5] = {10, 20, 30, 40, 50};

    cout << "0th index er address - " << &ar[0] << endl;
    cout << "0th index er address - " << ar << endl;

    cout << "0th index er value - " << ar[0] << endl;
    cout << "0th index er value - " << *ar << endl;

    cout << "1st index er value - " << ar[1] << endl;
    cout << "1st index er value - " << *(ar + 1) << endl;

    cout << *(1 + ar) << endl;

    cout << *(ar + 1) << endl;
    cout << *(1 + ar) << endl;
    cout << ar[1] << endl;
    cout << 1 [ar] << endl;

    return 0;
}
