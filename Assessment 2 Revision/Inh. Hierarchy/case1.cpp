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
    Derived derivedObj;       // Derived-class object
    Base* basePtr = &derivedObj;  // Base-class pointer to derived-class object

    // Call the display function via the base-class pointer
    basePtr->display();  // Invokes the Base class functionality

    return 0;
}
