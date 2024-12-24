#include<iostream>
using namespace std;
class GradeBook
{
    string name;
    public:
    GradeBook(string n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }
    void display()
    {
        cout<<"\nCourse : "<<getName()<<" has been introduced.";
    }
    ~GradeBook()
    {
        cout<<"\nDestructor Called...";
        cout<<"\nObject Destroyed Successfully";
    }
};

int main()
{
    GradeBook b1("Object Oriented Programming");
    b1.display();
    GradeBook b2("Database Management System");
    b2.display();
}