#include <bits/stdc++.h>
using namespace std;

class OfficeColleague
{
public:
    char name[100];
    int employeeID;
    char department[100];
    char position[100];

    OfficeColleague(int id, const char *dept, const char *pos, const char *n)
    {
        employeeID = id;
        strcpy(department, dept);
        strcpy(position, pos);
        strcpy(name, n);
    }
};

OfficeColleague createOfficeColleague()
{
    char name[100] = "Rahim Uddin";
    OfficeColleague oc(201, "Finance", "Analyst", name);
    return oc;
}

int main()
{

    OfficeColleague rahim = createOfficeColleague();

    cout << rahim.name << "\n";
    cout << rahim.employeeID << "\n";
    cout << rahim.department << "\n";
    cout << rahim.position << "\n";
}
