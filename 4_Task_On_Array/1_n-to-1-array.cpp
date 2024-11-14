#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements in array\n";
    cin >> n;
    cout << "Enter numbers \n";

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Reversed Array\n";

    for (int i = n - 1; i >= 0; i--)

    {
        cout << arr[i] << " ";
    }
    return 0;
}