#include <iostream>
using namespace std;

class Student 
{
    string name;
    int age;
    string dept;
    public:
    void setDetails(string n, int a, string d) 
    {
        name = n;
        age = a;
        dept = d;
    }
    void display() 
    {
        cout << "Name       : " << name << endl;
        cout << "Age        : " << age << endl;
        cout << "Department : " << dept << endl;
    }
};
int main() 
{
    Student student1;
    string name;
    string dept;
    int age;
    cout << "Student's Details: "<<endl;
    cout << "Enter student's name       : ";
    getline(cin, name);
    cout << "Enter student's age        : ";
    cin >> age;
    cin.ignore();  // Ignore the newline character left in the input buffer
    cout << "Enter student's department : ";
    getline(cin, dept);
    student1.setDetails(name, age, dept);
    cout<<"Student's Details are added sucessfully. \n";
    cout<<"Displaying Student's Detail \n";
    student1.display();
    return 0;
}
