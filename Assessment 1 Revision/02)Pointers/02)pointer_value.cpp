#include<iostream>
using namespace std;
int main(void)
{
    int x = 10;
    int *h = &x;
    cout<<h<<endl;
    cout<<*h;   //Dereferencing 
    *h = 25;
    cout<<"\nValue after changing it : "<<*h;
    cout<<"\nValue of x changing it : "<<x;
    


}