#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 10, b = 25;
    cout<<"Before Swapping\na = "<<a<<"\nb = "<<b<<endl;
    swap(a,b);
    cout<<"After Swapping\na = "<<a<<"\nb = "<<b<<endl;
}

