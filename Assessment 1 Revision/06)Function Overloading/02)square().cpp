#include<iostream>
using namespace std;
void square()
{
    cout<<"\nWelcome to Function Overloading";
}
int square(int x)
{
    return x*x;
}
double square(double x)
{
    return x*x;
}
int main()
{
    square();
    cout<<"\nSquare of 10 = "<<square(10);
    cout<<"\nSquare of 10.25 = "<<square(10.25);

}