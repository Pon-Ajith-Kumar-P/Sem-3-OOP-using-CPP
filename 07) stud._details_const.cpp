#include <iostream>
#include <string>
using namespace std;
class Student 
{
    private:
        string name;
        int rno;

    public:        
        Student(string n, int roll) 
        {
            name=n;
            rno=roll;
        }

    void displayDetails() 
    {
        cout<<"\nDisplaying Student Details\n";
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rno << endl;
    }
};

int main() 
{
    string name;
    int rno;
    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter roll number: ";
    cin >> rno;
    Student student1(name, rno);
    student1.displayDetails();
    return 0;
}