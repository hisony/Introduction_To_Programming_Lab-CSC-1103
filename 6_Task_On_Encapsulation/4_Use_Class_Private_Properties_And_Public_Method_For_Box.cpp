#include <iostream>
using namespace std;
class Box
{
private:
    float length, breadth, height;

public:
    void input(float l, float b, float h)
    {

        length = l;
        breadth = b;
        height = h;
    }

    void volume()
    {
        float length = 5, breadth = 7, height = 8;
        cout << length * breadth * height;
    }
};
int main()
{
    Box v;

    v.volume();

    return 0;
}