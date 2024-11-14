#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Demonstrating string size and max_size
    string s = "Hello World";
    cout << "Original String: " << s << "\n";
    cout << "Size: " << s.size() << "\n";         // Prints the size of the string
    cout << "Max Size: " << s.max_size() << "\n"; // Prints the maximum size the string can grow to
    cout << "-------------------------------------------\n";

    // Demonstrating string capacity
    string a = "bfujdbkjvfdshjbjfbjbsdjkbfb hfgbkbjbjfbjb";
    cout << "String a: " << a << "\n";
    cout << "Initial Capacity of a: " << a.capacity() << "\n"; // Prints the initial capacity of the string

    a = "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh";
    cout << "Modified String a: " << a << "\n";
    cout << "New Capacity of a: " << a.capacity() << "\n"; // Prints the new capacity after modifying the string
    cout << "New Size of a: " << a.size() << "\n";         // Prints the new size after modifying the string
    cout << "-------------------------------------------\n";

    // Demonstrating clear and size
    string s2 = "Hello";
    cout << "Original String s2: " << s2 << "\n";
    s2.clear();                                              // Clears the string
    cout << "Cleared String s2: " << s2 << "\n";             // Prints the cleared string (which will be empty)
    cout << "Size of s2 after clear: " << s2.size() << "\n"; // Prints the size after clearing the string
    cout << "-------------------------------------------\n";

    // Demonstrating empty
    string s3 = "Hello";
    cout << "Original String s3: " << s3 << "\n";
    s3.clear(); // Clears the string
    if (s3.empty())
        cout << "String s3 is Empty after clear\n"; // Checks if the string is empty
    else
        cout << "String s3 is Not Empty after clear\n";
    cout << "-------------------------------------------\n";

    // Demonstrating resize
    string s4;
    cout << "Enter a string for s4: ";
    cin >> s4; // Input a string from the user

    // Resizing the string to 5 characters
    s4.resize(5);
    cout << "String s4 resized to 5 characters: " << s4 << "\n"; // Prints the resized string

    // Resizing the string to 11 characters and filling the new positions with 'X'
    s4.resize(11, 'X');
    cout << "String s4 resized to 11 characters with 'X': " << s4 << "\n"; // Prints the resized string with 'X' filling
}
