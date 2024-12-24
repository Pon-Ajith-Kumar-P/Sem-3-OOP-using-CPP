#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
    
    void inputdetails() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
    }
    
    void dispdetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Patient : public Person {
public:
    string dis,stat;
    
    void inputPatientDetails() {
        inputdetails();
        cout << "Enter disease: ";
        getline(cin, dis);
        cin.ignore();
        cout << "Enter status : ";
        getline(cin, stat);
    }
    
    void displayPatientDetails() {
        dispdetails();
        cout << "Disease: " << dis << endl;
        cout << "Status: " << stat << endl;
    }
};

int main() {
    Patient p;
    p.inputPatientDetails();
    cout << "\nPatient Details:\n";
    p.displayPatientDetails();
    return 0;
}