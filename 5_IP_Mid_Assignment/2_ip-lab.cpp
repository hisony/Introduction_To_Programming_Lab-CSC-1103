#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main()
{
    int num;

    char ch;

    string str;

    cout << " How many Characters : ";
    cin >> num;

    cout << " Must have character :  ";
    cin >> ch;

    cout << " Write Your Answer : ";
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {

        if (ch == str[i])
        {
            cout << " Your given word " << str << " has " << str.length() << " character and character " << ch << endl;
        }
    }

    return 0;
}