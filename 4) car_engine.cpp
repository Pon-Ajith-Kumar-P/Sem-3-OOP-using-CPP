#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual string start_engine() {
        return "Engine started";
    }
};

class Car : public Vehicle {
public:
    string start_engine() override {
        return "Car engine started";
    }
};

int main() {
    Vehicle myveh;
    cout << myveh.start_engine() << endl;
    Car myCar;
    cout << myCar.start_engine() << endl;
    return 0;
}
