#include <iostream>

using namespace std;

int main()
{
    // do-while loop
    int i = 1;
    do
    {
        if (i == 3)
        {
            i++;
            continue;
        }
        cout << i << endl;
        if (i == 5)
        {
            break;
        }
        i++;
    } while (true);

    // for loop
    for (int j = 1; j <= 5; j++)
    {
        if (j == 3)
        {
            continue;
        }
        cout << j << endl;
        if (j == 4)
        {
            break;
        }
    }

    // while loop
    int k = 1;
    while (k <= 5)
    {
        if (k == 2)
        {
            k++;
            continue;
            cout << k << endl;
            if (k == 4)
            {
                break;
                k++;
            }
        }
        return 0;
    }
}
