#include<iostream>
using namespace std;

template<typename T,typename U>
void result(T a, U b)
{
    cout<<a<<'\n'<<b;
}

int main()
{
    result(10, "Pon Ajith Kumar");

}