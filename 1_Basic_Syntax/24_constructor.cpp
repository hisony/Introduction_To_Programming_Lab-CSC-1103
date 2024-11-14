#include <bits/stdc++.h>

using namespace std;

class OfficeColleague
{
public:
    char name[100];
    int employeeID;
    char department[100];
    char position[100];

    OfficeColleague(int id, char *dept, char *pos, char *n)
    {
        employeeID = id;
        strcpy(department, dept);
        strcpy(position, pos);
        strcpy(name, n);
    }
};

int main()
{

    OfficeColleague rahim(201, "Finance", "Analyst", "Rahim Uddin");
    OfficeColleague karim(202, "Marketing", "Executive", "Karim Cholimulla");

    cout << "Rahim's Employee ID: " << rahim.employeeID << "\n";
    cout << "Rahim's Department: " << rahim.department << "\n";
    cout << "Rahim's Position: " << rahim.position << "\n";
    cout << "Rahim's Name: " << rahim.name << "\n";

    cout << "Karim's Employee ID: " << karim.employeeID << "\n";
    cout << "Karim's Department: " << karim.department << "\n";
    cout << "Karim's Position: " << karim.position << "\n";
    cout << "Karim's Name: " << karim.name << "\n";
}
