#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "Hello";
    string b = "A";
    a += b;
    a.append(b);
    cout << a << endl;
    cout << b << endl;
    a = "HelloA";
    a = a + "A";
    a[0] = 'A';
    a.push_back('A');

    cout << a << "\n";

    a = "Gelo";
    a.assign("Gelo");
    cout << a << "\n";

    a = "HelloWorld";

    a.replace(5, 2, "ggg"); // Replace 2 characters starting from index 5 with "ggg"

    cout << a << "\n";

    a.erase(4, 3); // Erase 3 characters starting from index 4
    cout << a << "\n";

    a.insert(5, "Sony"); // Insert "Sony" at index 5

    cout << a << "\n";
}