#include <iostream>

using namespace std;

int main()
{
    int money;
    cout << "Enter the amount of money you have: ";
    cin >> money;

    if (money >= 10000)
    {
        cout << "You can go to an exotic destination like Santorini!" << endl;
    }
    else if (money >= 5000)
    {
        cout << "You can plan a trip to a beautiful place like Bali!" << endl;
    }
    else
    {
        cout << "Looks like you need to save more for your dream vacation." << endl;
    }

    return 0;
}
