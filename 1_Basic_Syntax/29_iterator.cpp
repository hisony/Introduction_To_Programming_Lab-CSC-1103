#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;

    cout << "Enter a string: ";

    cin >> s;
    // for(int i=0;i<s.size();i++)
    // {
    //     cout<<s[i]<<endl;
    // }
    cout << "first character :" << *s.begin() << "\n";
    cout << "last character :" << *(s.end() - 1) << "\n";
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}