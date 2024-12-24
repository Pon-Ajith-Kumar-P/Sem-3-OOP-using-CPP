#include<iostream>
using namespace std;

template<typename T>
void myswap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x=10;
    int y=25;
    cout<<"\nBefore: x = "<<x<<" y = "<<y;
    myswap(x,y);
    cout<<"\nAfter: x = "<<x<<" y = "<<y;    
}