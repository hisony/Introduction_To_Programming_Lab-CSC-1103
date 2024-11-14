#include <iostream>

using namespace std;

void fun(int n)
{
    if (n <= 0)
        return; // Base condition to terminate recursion

    cout << "Fun" << endl;
    fun(n - 1); // Call itself recursively with a smaller value
}

int main()
{
    int count = 5; // Number of times to print "Fun"
    fun(count);
    return 0;
}
