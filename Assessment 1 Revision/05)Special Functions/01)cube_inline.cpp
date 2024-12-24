#include<iostream>
using namespace std;
inline float cube(float a)
{
    return a*a*a;
}
int main(void)
{
    int num;
    cout<<"\nEnter a number : ";
    cin>>num;
    cout<<"\nCube of "<<num<<" = "<<cube(num);
}