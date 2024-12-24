#include<iostream>
using namespace std;
class Base 
{
    public:
    virtual void vdisplay()
    {
        cout<<"\nBase Class vdisplay";
    }
    void show()
    {
        cout<<"\nBase Class show";
    }
};

class Derived : public Base
{
    public:
    void vdisplay() override
    {
        cout<<"\nDerived Class vdisplay";
    }
    void show()
    {
        cout<<"\nDerived Class show";
    }
};

int main()
{
    Derived dObj;
    Base *bPtr = &dObj;
    bPtr->vdisplay();   //Compiled only during the run time
    bPtr->show();       //It is compiled during compile time itself
    dObj.show();
}