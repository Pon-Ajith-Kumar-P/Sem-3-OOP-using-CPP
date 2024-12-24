#include<iostream>
using namespace std;

class Vehicle 
{
public:
    void start() 
    {
        cout << "Vehicle started.\n";
    }
};
class Car : public Vehicle 
{
public:
    void drive() 
    {
        cout << "Car is driving.\n";
    }
};
class Bike : public Vehicle 
{
public:
    void ride() 
    {
        cout << "Bike is riding.\n";
    }
};
int main() 
{
    Car car;
    Bike bike;
    car.start();
    car.drive();
    bike.start();
    bike.ride();
    return 0;
}