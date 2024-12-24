#include<iostream>
using namespace std;
int main(void)
{
    int val = 10;
    int *ptr = &val;
    int **double_ptr = &ptr;
    cout<<"-----Printing the Values-----";
    cout<<"\nVal        : "<<val;
    cout<<"\nPtr        : "<<*ptr;
    cout<<"\nDouble Ptr : "<<**double_ptr;
    cout<<"\n-----Printing the Address-----";
    cout<<"\nVal        : "<<&val;
    cout<<"\nVal        : "<<ptr;
    cout<<"\nVal        : "<<*double_ptr;
    
    cout<<"\n\nPtr        : "<<&ptr;
    cout<<"\nPtr        : "<<double_ptr;

    cout<<"\n\nDouble Ptr : "<<&double_ptr;


}

