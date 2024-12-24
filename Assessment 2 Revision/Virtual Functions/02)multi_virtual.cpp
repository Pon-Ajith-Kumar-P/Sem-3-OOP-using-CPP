#include<iostream>
using namespace std;
class Base 
{
    public:
    virtual void vdisplay()
    {
        cout<<"\nBase Class vdisplay";
    }
};

class Derived1 : public Base
{
    public:
    void vdisplay() override
    {
        cout<<"\nDerived1 Class vdisplay";
    }
};

class Derived2 : public Base
{
    public:
    void vdisplay() override
    {
        cout<<"\nDerived2 Class vdisplay";
    }
};

int main()
{
    Base *p, b;
    p = &b;
    p->vdisplay();
    Derived1 d1;
    p = &d1;
    p->vdisplay();
    Derived2 d2;
    p = &d2;
    p->vdisplay();
}