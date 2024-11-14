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
    char name1[100] = "Rahim Uddin";
    char name2[100] = "Karim Cholimulla";
    char dept1[100] = "Finance";
    char dept2[100] = "Marketing";
    char pos1[100] = "Analyst";
    char pos2[100] = "Executive";

    // Creating dynamic objects

    // sorasori string value bosale warning
    OfficeColleague *rahim = new OfficeColleague(201, dept1, pos1, name1);
    OfficeColleague *karim = new OfficeColleague(202, dept2, pos2, name2);

    cout << "Rahim's Employee ID: " << rahim->employeeID << "\n";
    cout << "Rahim's Department: " << rahim->department << "\n";
    cout << "Rahim's Position: " << rahim->position << "\n";
    cout << "Rahim's Name: " << rahim->name << "\n";

    cout << "Karim's Employee ID: " << karim->employeeID << "\n";
    cout << "Karim's Department: " << karim->department << "\n";
    cout << "Karim's Position: " << karim->position << "\n";
    cout << "Karim's Name: " << karim->name << "\n";

    cout << "\n\n\n-------------------------------------------\n\n\n"
         << "\n";

    cout << "Rahim's Employee ID: " << (*rahim).employeeID << "\n";
    cout << "Rahim's Department: " << (*rahim).department << "\n";
    cout << "Rahim's Position: " << (*rahim).position << "\n";
    cout << "Rahim's Name: " << (*rahim).name << "\n";

    cout << "Karim's Employee ID: " << (*karim).employeeID << "\n";
    cout << "Karim's Department: " << (*karim).department << "\n";
    cout << "Karim's Position: " << (*karim).position << "\n";
    cout << "Karim's Name: " << (*karim).name << "\n";

    delete rahim;
    delete karim;
}
