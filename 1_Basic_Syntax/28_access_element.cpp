#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cout << "Enter a string: ";
    cin >> s;

    // first character
    cout << s[0] << "\n";
    cout << s.at(0) << "\n";

    // last character
    cout << s[s.size() - 1] << "\n";
    cout << s.back() << "\n";

    // first character
    cout << "First character using s.front(): " << s.front() << "\n";
}
