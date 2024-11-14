#include <iostream>

using namespace std;

int main()
{

    float *f = new float;

    *f = 2.56;

    cout << *f << "\n";

    delete f;
}
