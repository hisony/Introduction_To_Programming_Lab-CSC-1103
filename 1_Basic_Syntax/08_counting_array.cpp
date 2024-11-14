#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int count[26] = {0};

    for (char c : input)
    {

        if (isalpha(c))
        {
            c = tolower(c);
            count[c - 'a']++;
        }
    }

    cout << "Occurrences of each letter:" << endl;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            cout << char('a' + i) << " - " << count[i] << endl;
        }
    }

    return 0;
}
