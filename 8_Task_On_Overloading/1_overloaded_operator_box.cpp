#include <iostream>
using namespace std;
class Box
{

public:
    float weidth = 0;
    float length = 0;
    float height = 0;
    Box(float l, float w, float h)
    {
        length = l;
        weidth = w;
        height = h;
    }
    Box() {}
    Box operator+(Box obj)
    {
        Box x;
        cout << "Adding: " << endl;
        x.length = length + obj.length;
        x.weidth = weidth + obj.weidth;
        x.height = height + obj.height;
        return x;
    }
    Box operator*(Box obj)
    {
        Box x;
        cout << "Multiply: " << endl;
        x.length = length * obj.length;
        x.weidth = weidth * obj.weidth;
        x.height = height * obj.height;
        return x;
    }
    void print()
    {
        cout << "Box length= " << length << " Weidth= " << weidth << " Height= " << height << endl;
    }
};
int main()
{
    Box b1(2, 4, 6), b2(3, 5, 7);
    b1.print();
    b2.print();
    Box b3 = b1 + b2;
    b3.print();
    Box b4 = b1 * b2;
    b4.print();

    return 0;
}