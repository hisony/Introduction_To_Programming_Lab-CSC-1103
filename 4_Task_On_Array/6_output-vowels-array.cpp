#include <iostream>
using namespace std;

int main()
{
    char n[150];
    int vowels;

    vowels = 0;

    cout << "Enter a line of string: ";
    cin >> n;
    for (int i = 0; n[i] != '\0'; ++i)
    {
        if (n[i] == 'a' || n[i] == 'e' || n[i] == 'i' ||
            n[i] == 'o' || n[i] == 'u' || n[i] == 'A' ||
            n[i] == 'E' || n[i] == 'I' || n[i] == 'O' ||
            n[i] == 'U')
        {
            ++vowels;
        }
    }

    cout << "Vowels: " << vowels << endl;

    return 0;
}