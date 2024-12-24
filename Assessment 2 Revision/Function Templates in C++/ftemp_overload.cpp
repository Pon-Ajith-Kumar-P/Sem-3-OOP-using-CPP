#include<iostream>
using namespace std;

template<typename T>
T area(T side)
{
    return side*side;
}

template<typename T>
T area(T l,T b)
{
    return l*b;
}

int main()
{
    int a;
    cout<<"\nEnter the side : ";
    cin>>a;
    cout<<"Area of the square : "<<area(a);

    double l,b;
    cout<<"\nEnter the length and breadth : ";
    cin>>l>>b;
    cout<<"Area of the rectangle : "<<area(l,b);
}