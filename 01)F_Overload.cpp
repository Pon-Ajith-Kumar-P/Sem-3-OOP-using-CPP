#include<iostream>
using namespace std;
int area(int a)
{
    return a*a;
}
int area(int l,int b)
{
    return l*b;
}
float area(float ba,float h)
{
    return 0.5*ba*h;
}
float area(float b1,float b2,float h1)
{
    return 0.5*(b1+b2)*h1;
}

int main(void)
{
    int a;
    cout<<"Enter the side of the square : ";
    cin>>a;
    cout<<"\nThe area of square = "<<area(a);

    int l,b;
    cout<<"\nEnter the length and breadth of rectangle : ";
    cin>>l>>b;
    cout<<"\nThe area of rectangle = "<<area(l,b);
    
    float ba,h;
    cout<<"\nEnter the base and height of right triangle : ";
    cin>>ba>>h;
    cout<<"\nThe area of triangle = "<<area(ba,h);

    float b1,b2,h1;
    cout<<"\nEnter the base1, base2 and height of right triangle : ";
    cin>>b1>>b2>>h1;
    cout<<"\nThe area of trapezoid = "<<area(b1,b2,h1);
}