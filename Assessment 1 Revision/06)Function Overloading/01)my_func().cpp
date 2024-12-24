#include<iostream>
using namespace std;
void my_func()
{
    cout<<"\nWelcome to Function Overloading";
}
int my_func(int n)
{
    return n;
}
float my_func(float n)
{
    return n;
}
double my_func(double n)
{
    return n;
}
int my_func(int a,int b)
{
    return a+b;
}
int my_func(int a,int b,int c)
{
    return a+b+c;
}
float my_func(float a,float b)
{
    return a+b;
}
double my_func(double a,double b)
{
    return a+b;
}
int main()
{
    my_func();
    cout<<"\nThe value of int : "<<my_func(10);
    cout<<"\nThe value of float : "<<my_func(10.25f);
    cout<<"\nThe value of double : "<<my_func(10.25);
    cout<<"\nThe sum of int : "<<my_func(10,25);
    cout<<"\nThe sum of int : "<<my_func(10,15,25);
    cout<<"\nThe sum of float : "<<my_func(10.09f,25.10f);
    cout<<"\nThe sum of double : "<<my_func(10.09,25.10);
}