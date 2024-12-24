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

void ref(Base &b)
{
    b.vdisplay();
}

int main()
{
    Base b;
    ref(b);
    Derived1 d1;
    ref(d1);
    Derived2 d2;
    ref(d2);
}