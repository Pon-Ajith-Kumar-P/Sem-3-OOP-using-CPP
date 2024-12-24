#include<iostream>
using namespace std;
class A
{
    int data;
    public:
        void setdata(int data);
        int getdata();

};
void A::setdata(int data)
{
    this->data = data;
}
int A::getdata()
{
    return data;
}
int main()
{
    int n;
    cout<<"\nEnter the number : ";
    cin>>n;
    A a;
    a.setdata(n);
    cout << "\nThe value of the data = " << a.getdata();
}