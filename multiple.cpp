#include<iostream>
using namespace std;
class Person 
{
public:
    string name;
    void setname() 
    {
        cout << "Enter the Employee Details: \n";
        cout << "Enter name: ";
        getline(cin, name);  
    }
    void persondetails() 
    {
        cout << "Name: " << name << "\n";
    }
};
class Department 
{
public:
    string deptname;
    void setdept() 
    {
        cout << "Enter department: ";
        getline(cin, deptname);
    }
    void showdept() 
    {
        cout << "Department: " << deptname << "\n";
    }
};
class Employee : public Person, public Department 
{
public:
    int eid;
    void seteid() 
    {
        cout << "Enter employee ID: ";
        cin >> eid;
        cin.ignore(); 
    }
    void employeedetails() 
    {
        persondetails();
        showdept();
        cout << "Employee ID: " << eid << "\n";
    }
};
class Manager : public Employee 
{
public:
    void dispdetails() 
    {
        employeedetails();
    }
};
int main() 
{
    Employee emp;
    emp.setname();      
    emp.setdept();    
    emp.seteid();     
    cout << "\nDisplaying Employee Details:\n";
    emp.employeedetails();
    return 0;
}
