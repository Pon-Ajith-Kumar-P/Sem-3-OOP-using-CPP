#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() { // Virtual function
        cout << "Base class display function called." << endl;
    }
    virtual ~Base() { // Virtual destructor for proper cleanup
        cout << "Base class destructor called." << endl;
    }
};

class Derived : public Base {
public:
    void display() override { // Override the base-class virtual function
        cout << "Derived class display function called." << endl;
    }
    ~Derived() {
        cout << "Derived class destructor called." << endl;
    }
};

int main() {
    Base* basePtr; // Base-class pointer
    Derived derivedObj; // Derived-class object

    basePtr = &derivedObj; // Pointing to derived-class object

    // Polymorphic behavior: derived-class display() is called
    basePtr->display();

    return 0;
}