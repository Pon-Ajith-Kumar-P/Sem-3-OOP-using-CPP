#include<iostream>
using namespace std;
int main(void)
{
    cout<<"\nDynamic Memory Management using single pointer : ";
    int m=2,n=2;
    //Declare memory block of size m
    int **arr = new int *[m];
    for(int i=0;i<m;i++)
    {
        arr[i] = new int[n];
    }
    int c=0;
    cout<<"\nUpdating array with the data";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            arr[i][j] = ++c;
        }
    }
    cout<<"\nPrinting the updated data\n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<'\t';
        }
        cout<<endl;
    }
}