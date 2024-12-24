#include<iostream>
using namespace std;

template<typename T>
void myswap(T *a, T *b)
{
    T temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

template<typename T>
void bubbleSort(T arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                myswap(&arr[j],&arr[j+1]);
        }
    }
}

int main()
{
    int arr[] = {3,4,2,5,1};
    bubbleSort(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<' ';
    }
}