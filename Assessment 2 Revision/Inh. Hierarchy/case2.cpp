#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display function called." << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived class display function called." << endl;
    }
};

int main() {
    Base baseObj;                           // Base-class object
    //Derived* derivedPtr = &baseObj;       // Attempt to assign address of base object to derived-class pointer

    // Uncommenting the below line would cause a compilation error
    //derivedPtr->display();

    return 0;
}
