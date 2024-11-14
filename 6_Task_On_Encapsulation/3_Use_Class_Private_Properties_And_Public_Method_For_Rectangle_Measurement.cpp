
#include <iostream>
using namespace std;
class Rectangle
{
private:
    float len;
    float width;

public:
    void setlen(float l)
    {
        len = l;
    }
    void setwidth(float w)
    {
        width = w;
    }
    float getlen()
    {
        return len;
    }
    float getwidth()
    {
        return width;
    }
    void getArea()
    {
        cout << "Enter the length: ";
        cin >> len;
        cout << "Enter width: ";
        cin >> width;
    }
    void returnArea()
    {
        cout << "Area is: " << len * width;
    }
};
int main()
{
    Rectangle A;
    A.getArea();
    A.returnArea();
}