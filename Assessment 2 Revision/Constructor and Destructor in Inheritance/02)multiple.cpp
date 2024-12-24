#include<iostream>
using namespace std;
class Base
{
    public:
        Base()
        {
            cout<<"\nBase Class Constructor";
        }
        ~Base()
        {
            cout<<"\nBase Class Destructor";
        }
};
class Derived
{
    public:
        Derived()
        {
            cout<<"\nBase Class 1 Constructor";
        }
        ~Derived()
        {
            cout<<"\nBase Class 1 Destructor";
        }
};
class Derived2 : public Base, Derived
{
    public:
        Derived2()
        {
            cout<<"\nDerived Class 2 Constructor";
        }
        ~Derived2()
        {
            cout<<"\nDerived Class 2 Destructor";
        }
};
int main()
{
    Derived2 d;
}