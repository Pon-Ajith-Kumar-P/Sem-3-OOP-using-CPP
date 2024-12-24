#include<iostream>
using namespace std;
class Base
{
    int i;
    public:
        void set_base_num(int num)
        {
            i = num;
        }
        int get_base_num()
        {
            return i;
        }
};
class Derived : public Base
{
    int j;
    public:
        void set_derived_num(int num)
        {
            j = num;
        }
        int get_derived_num()
        {
            return j;
        }
};
int main()
{
    Derived d[2];
    Base *ptr = d;
    Derived *p = d;
    d[0].set_base_num(10);
    d[1].set_base_num(25);
    cout<<"\nBase Class Pointer";
    cout<<"\n"<<ptr->get_base_num();
    ptr++;
    cout<<"\n"<<ptr->get_base_num();
    
    cout<<"\nDerived Class Pointer";
    cout<<"\n"<<p->get_base_num();
    p++;
    cout<<"\n"<<p->get_base_num();
}
