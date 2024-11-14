#include <iostream>
using namespace std;
int main()
{
    int i, n;
    float sum = 0, avg, perc;
    cout << "Enter number of elements in array\n";
    cin >> n;
    cout << "Enter Marks obtained in Subjects: ";

    int arr[n];

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    avg = sum / n;

    cout << "Total Number " << sum;
    cout << "\nAverage Marks = " << avg;

    cout << endl;
    return 0;
}