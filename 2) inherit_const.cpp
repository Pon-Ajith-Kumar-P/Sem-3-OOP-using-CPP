#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    Person() {
        name = "Ajith";
        age = 18;
        cout << "Base Class (Person) constructor called\n";
    }

};
class Student : public Person {
private:
    string studentID;

public:
    Student() { 
        studentID = "5036";
        cout << "Derived Class (Student) constructor called\n";
    }

    void displayDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Student ID: " << studentID << endl;
    }
};

int main() {
    Student obj;
    obj.displayDetails();
    return 0;
}
