#include<iostream>
using namespace std;
class Base
{
    int i;
    public:
        Base(int num)
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
        Derived(int num) : Base(num)
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
    Derived d(25);
    Base *ptr = &d;
    cout<<"The base number is "<<ptr->get_base_num();
    //Error//cout<<"The number is "<<ptr->get_derived_num();
    cout<<"\nThe derived number is "<<d.get_derived_num();
    cout<<"\nThe derived number is "<<((Derived *)ptr)->get_derived_num();
}