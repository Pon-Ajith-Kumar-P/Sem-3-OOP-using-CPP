#include <iostream>
using namespace std;

class Base {
public:
    void baseFunction() {
        cout << "Base class function called." << endl;
    }
};

class Derived : public Base {
public:
    void derivedFunction() {
        cout << "Derived class function called." << endl;
    }
};

int main() {
    Derived derivedObj;          // Derived-class object
    Base* basePtr = &derivedObj; // Base-class pointer pointing to derived-class object

    // Valid: Base-class pointer invoking a base-class function
    basePtr->baseFunction();

    // Invalid: Base-class pointer attempting to invoke a derived-class function
    // Uncommenting the below line will cause a compilation error
    // basePtr->derivedFunction();

    return 0;
}
