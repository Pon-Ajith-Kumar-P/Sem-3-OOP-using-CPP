#include <iostream>
using namespace std;

class Person 
{
protected:
    string name;
    int age;
public:
    void set_per_details(string n, int a) 
    {
        name = n;
        age = a;
    }

};

class Employee : public Person 
{
protected:
    int employeeID;
public:
    void set_emp_details(int id) 
    {
        employeeID = id;
    }

 
};

class Manager : public Employee 
{
private:
    string dept;
public:
    void set_mgr_details(string department) 
    {
        dept = department;
    }

    void display() 
    {
        cout << "Name: " << name << "\nAge: " << age << "\nEmployee ID: " << employeeID 
             << "\nDepartment: " << dept << endl;
    }
};

int main() 
{
    string name, dept;
    
    int age, employeeID;

    cout << "Enter manager's name: ";
    getline(cin, name);
    
    cout << "Enter manager's age: ";
    cin >> age;

    cout << "Enter employee ID: ";
    cin >> employeeID;

    cout << "Enter department: ";
    cin.ignore(); 
    getline(cin, dept);

    Manager m;

    m.set_per_details(name, age);
    m.set_emp_details(employeeID);
    m.set_mgr_details(dept);
    m.display();
    return 0;
}