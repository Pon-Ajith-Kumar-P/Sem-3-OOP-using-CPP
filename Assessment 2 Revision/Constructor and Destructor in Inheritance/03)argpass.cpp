#include<iostream>
using namespace std;
class Base
{
    public:
        Base(int x)
        {
            cout<<"\nBase Class Constructor";
            cout<<"\nValue = "<<x;
        }
        ~Base()
        {
            cout<<"\nBase Class Destructor";
        }
};
class Derived : public Base
{
    public:
        Derived(int x,int y) : Base(x)
        {
            cout<<"\nDerived Class Constructor";
            cout<<"\nValue = "<<y;
        }
        ~Derived()
        {
            cout<<"\nDerived Class Destructor";
        }
};
int main()
{
    Derived d(10,25);
}