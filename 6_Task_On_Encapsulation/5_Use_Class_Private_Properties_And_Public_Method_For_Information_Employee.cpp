#include <iostream>
using namespace std;
class Employee
{
private:
    string name = "";
    string join = "";
    string address = "";

public:
    void setname(string n)
    {
        name = n;
    }
    void setjoin(string j)
    {
        join = j;
    }
    void setaddress(string a)
    {
        address = a;
    }
    string getname()
    {
        return name;
    }
    void showemployinfo()
    {
        cout << name << join << address << endl;
    }
};

int main()
{
    Employee s1, s2, s3, s4;
    s1.setname(" NAME");
    s1.setjoin("   YEAR OF JOIN");
    s1.setaddress("   ADDRESS");
    s1.showemployinfo();

    s2.setname(" Robert");
    s2.setjoin("   1994");
    s2.setaddress("      64c-wallsStreat");
    s2.showemployinfo();
    s3.setname(" sam");
    s3.setjoin("      2000");
    s3.setaddress("      68c-wallasStreat");
    s3.showemployinfo();

    s4.setname(" john");
    s4.setjoin("     1999");
    s4.setaddress("      26B-wallsStreat");
    s4.showemployinfo();

    return 0;
}