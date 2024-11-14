#include <iostream>
using namespace std;

// basa class Person
class Person
{
public:
    // variable type declared
    string name;
    string address;
    string phone_number;
    string email;
    string LinkedIn;

    // person parameterize constructor
    Person(string nam, string adrs, string num, string mail, string lindn)
    {
        name = nam;
        address = adrs;
        phone_number = num;
        email = mail;
        LinkedIn = lindn;
    }

    // get function
    void getinfo()
    {
        cout << "Person name is :" << name << endl;
        cout << "Person Address is :" << address << endl;
        cout << "Person Phone number is :" << phone_number << endl;
        cout << "Person E-mail address is :" << email << endl;
        cout << "Person LinkedIn profile is :" << LinkedIn << endl
             << endl;
    }
};

// employee class inherit from person class
class Employee : virtual public Person
{
public:
    // variable type declare for Employee
    string salary;
    string last_job;
    string experience;

public:
    // Employee Parameterize constructor
    Employee(string nam, string adrs, string num, string mail, string lindn, string lj, string in, string exp) : Person(nam, adrs, num, mail, lindn)
    {
        last_job = lj;
        salary = in;
        experience = exp;
    }
    void getinfo()
    {
        cout << "Employee Name is :" << name << endl;
        cout << "Employee Address is :" << address << endl;
        cout << "Employee Phone number is :" << phone_number << endl;
        cout << "Employee E-mail address is :" << email << endl;
        cout << "Employee LinkedIn profile is :" << LinkedIn << endl;
        cout << "Employee Last job is :" << last_job << endl;
        cout << "Employee Experience is :" << experience << endl;
        cout << "Employee salary is :" << salary << "tk " << endl
             << endl;
    }
};

// officer class inherit from employee class
class Officer : public Employee
{
private:
    // variable type
    string Surname;

public:
    // officer Parameterize constructor
    Officer(string nam, string adrs, string num, string mail, string exp, string sunmn, string lindn, string lj, string in) : Employee(nam, adrs, num, mail, lindn, lj, in, exp), Person(nam, adrs, num, mail, lindn)
    {
        Surname = sunmn;
    }
    void getinfo()
    {
        cout << "Officer Name is :" << name << endl;
        cout << "Officer Address is :" << address << endl;
        cout << "Officer Phone number is :" << phone_number << endl;
        cout << "Officer E-mail address is :" << email << endl;
        cout << "Officer Experience is :" << experience << endl;
        cout << "Officer Surname is :" << Surname << endl;
        cout << "Officer LinkedIn profile is :" << LinkedIn << endl;
        cout << "Officer Last job is :" << last_job << endl;
        cout << "Officer salary is :" << salary << "tk " << endl
             << endl;
    }
};

// faculty class inherit from employee
class Faculty : public Employee
{
private:
    string faculty_sub_nem;
    string Education;

public:
    // faculty Parameterize constructor
    Faculty(string nam, string adrs, string num, string mail, string lindn, string lj, string in, string fanm, string edu, string exp) : Employee(nam, adrs, num, mail, lindn, lj, in, exp), Person(nam, adrs, num, mail, lindn)
    {
        faculty_sub_nem = fanm;
        Education = edu;
    }

    void getinfo()
    {
        cout << "Faculty Teacher Name is :" << name << endl;
        cout << "Faculty Subject Name is :" << faculty_sub_nem << endl;
        cout << "Faculty Teacher completed Education from :" << Education << endl;
        cout << "Faculty Address is :" << address << endl;
        cout << "Faculty Phone number is :" << phone_number << endl;
        cout << "Faculty E-mail address is :" << email << endl;
        cout << "Faculty LinkedIn profile is :" << LinkedIn << endl;
        cout << "Faculty Last job is :" << last_job << endl;
        cout << "Faculty salary is  :" << salary << "tk " << endl
             << endl;
    }
};

// student class inherit from person
class Student : virtual public Person
{
public:
    // variable type declare for student class
    double cgpa;

public:
    // student Parameterize constructor
    Student(string nam, string adrs, string num, string mail, string lindn, double c) : Person(nam, adrs, num, mail, lindn)
    {
        cgpa = c;
    }
    void getinfo()
    {
        cout << "Student name is :" << name << endl;
        cout << "Student Address is :" << address << endl;
        cout << "Student Phone number is :" << phone_number << endl;
        cout << "Student E-mail address is :" << email << endl;
        cout << "Student LinkedIn profile is :" << LinkedIn << endl;
        cout << "Student CGPA is :" << cgpa << endl
             << endl;
    }
};

// scholarshipStudent class inherits student

class scholarshipStudent : public Student
{
private:
    // variable type
    int waiver;

public:
    // scholarshipStudent Parameterize constructor
    scholarshipStudent(string nam, string adrs, string num, string mail, string lindn, double c, int wvr) : Student(nam, adrs, num, mail, lindn, c), Person(nam, adrs, num, mail, lindn)
    {
        waiver = wvr;
    }
    void getinfo()
    {
        cout << "Scholarship Student name is :" << name << endl;
        cout << "Scholarship Student Address is :" << address << endl;
        cout << "Scholarship Student Phone number is :" << phone_number << endl;
        cout << "Scholarship Student E-mail address is :" << email << endl;
        cout << "Scholarship Student LinkedIn profile is :" << LinkedIn << endl;
        cout << "Scholarship Student CGPA is " << cgpa << endl;
        cout << "Scholarship Student waiver is :" << waiver << "%" << endl
             << endl;
    }
};
class TA : private Employee, private Student
{
public:
    // TA constructor declare
    TA(string nam, string adrs, string num, string mail, string lindn, double c, string exp, string lj, string in) : Employee(nam, adrs, num, mail, lindn, lj, in, exp), Student(nam, adrs, num, mail, lindn, c), Person(nam, adrs, num, mail, lindn)
    {
    }
    void getinfo()
    {
        cout << "TA name is :" << name << endl;
        cout << "TA Address is :" << address << endl;
        cout << "TA Phone number is :" << phone_number << endl;
        cout << "TA E-mail address is :" << email << endl;
        cout << "TA LinkedIn profile is :" << LinkedIn << endl;
        cout << "TA Experience is :" << experience << endl;
        cout << "TA CGPA is :" << cgpa << endl
             << endl;
    }
};
int main()
{

    // main function data call
    Person p1("Jisoo", "Seoul", "01749357341", "jisoo@gmail", "jichhu");
    p1.getinfo();
    Employee e1("Alika", "Bangkok", "01815374231", "alika@gmail", "liku", "Servay officer", "15000", "5 yr");
    e1.getinfo();
    Officer o1("Roserio", "Sydney", "01589457823", "roserio@gmail", "5 yr", "manager", "rose", "Fild officer", "20000");
    o1.getinfo();
    Faculty f1("Jemine", "Auckland", "01999749352", "jemine@gmail", "jem jem", "Teacher", "30000", "Theatre", "Auckland University", "");
    f1.getinfo();
    Student s1("Tanhem", "Daegu", "0155637843", "tanhem@gmail", "thv", 3.50);
    s1.getinfo();
    TA t1("Jimme", "Busan", "01889534641", "jimme@gmail", "jiminah", 3.95, "2 years", "", "");
    t1.getinfo();
    scholarshipStudent ss1("Nampie", "Dongjak", "017768562384", "nampie@gmail", "namp", 3.95, 50);
    ss1.getinfo();
    return 0;
}
