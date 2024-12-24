#include<iostream>
using namespace std;
int main(void)
{
    cout<<"\nDynamic Memory Management using single pointer : ";
    int m=2,n=2;
    int *arr = new int[m * n];  //arr[m][n]
    cout<<"\nHow to access data from it ???";
    int c=0;
    cout<<"\nUpdating array with the data";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            *(arr + i*n + j) = ++c;
        }
    }
    cout<<"\nPrinting the updated data {[ Used single pointer *(arr + i*n + j) ]}\n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<*(arr + i*n + j)<<'\t';
        }
        cout<<endl;
    }
}