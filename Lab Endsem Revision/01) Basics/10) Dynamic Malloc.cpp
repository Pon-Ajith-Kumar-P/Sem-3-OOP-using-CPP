#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    cout<<"\nNormal Integer : "<<a;
    
    //Pointer to a normal integer
    int *p;
    p = new int(10);
    cout<<"\nPointer Integer Address : "<<p;
    cout<<"\nPointer Integer Value   : "<<*p;
    delete p;
/*
    //Pointer for 1-D Array
    int *arr = new int[5];
    //Pointer for 2-D Array
    int **darr = new int*[5];
    for(int i=0;i<5;i++)
    {
        darr[i] = new int[i];
    }
*/
}