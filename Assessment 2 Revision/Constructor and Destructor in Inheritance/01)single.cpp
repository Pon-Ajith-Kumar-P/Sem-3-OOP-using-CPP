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
class Derived : public Base
{
    public:
        Derived()
        {
            cout<<"\nDerived Class Constructor";
        }
        ~Derived()
        {
            cout<<"\nDerived Class Destructor";
        }
};
int main()
{
    Derived d;
}