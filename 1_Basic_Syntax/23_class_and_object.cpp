#include <bits/stdc++.h>

using namespace std;

class OfficeColleague
{
public:
    char name[100];
    int employeeID;
    char department[100];
    char position[100];
};

int main()
{
    OfficeColleague rahim;
    rahim.employeeID = 201;
    char dept1[100] = "Finance";
    char pos1[100] = "Analyst";
    strcpy(rahim.department, dept1);
    strcpy(rahim.position, pos1);
    char nm1[100] = "Rahim Uddin";
    strcpy(rahim.name, nm1);

    OfficeColleague karim;
    karim.employeeID = 202;
    char dept2[100] = "Marketing";
    char pos2[100] = "Executive";
    strcpy(karim.department, dept2);
    strcpy(karim.position, pos2);
    char nm2[100] = "Karim Cholimulla";
    strcpy(karim.name, nm2);

    cout << "Rahim's Employee ID: " << rahim.employeeID << "\n";
    cout << "Rahim's Department: " << rahim.department << "\n";
    cout << "Rahim's Position: " << rahim.position << "\n";
    cout << "Rahim's Name: " << rahim.name << "\n";

    cout << "Karim's Employee ID: " << karim.employeeID << "\n";
    cout << "Karim's Department: " << karim.department << "\n";
    cout << "Karim's Position: " << karim.position << "\n";
    cout << "Karim's Name: " << karim.name << "\n";
}
