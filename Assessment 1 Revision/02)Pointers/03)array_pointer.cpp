#include<iostream>
using namespace std;
int main(void)
{
    int arr[5]={06,10,17,22,25};
    int *ptr = arr;
    cout<<"The array values\n";
    for(int i=0;i<5;i++)
    {
        cout<<*ptr<<"\t";
        ptr++;      //ptr = ptr + 1;
    }
}