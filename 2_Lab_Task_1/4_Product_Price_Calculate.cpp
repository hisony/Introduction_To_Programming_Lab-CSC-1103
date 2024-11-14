#include <iostream>
using namespace std;

int main()
{
    double q, p, t = 0, total = 0;

    while (true)
    {
        cout << "Write product number (1-5) which one you want, or 0 to stop: ";
        cin >> p;

        if (p == 0)
            break;

        cout << "How much quantity you want: ";
        cin >> q;


        if (p == 1)
        {
            t = q * 200.75;
        }
        else if (p == 2)
        {
            t = q * 345.50;
        }
        else if (p == 3)
        {
            t = q * 775.75;
        }
        else if (p == 4)
        {
            t = q * 400.35;
        }
        else if (p == 5)
        {
            t = q * 1200.75;
        }
        else
        {
            cout << "Invalid product number. Please enter a number between 1 and 5." << endl;
            continue;
        }

        total += t;
        cout << "Total price for this product: " << t << endl;
    }

    cout << "Total retail value of all products sold: BDT " << total << endl;

    return 0;
}
