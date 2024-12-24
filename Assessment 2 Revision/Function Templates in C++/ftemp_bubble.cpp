#include <iostream>
using namespace std;

template <typename T>
void mySwap(T *a, T *b)  // Renamed to 'mySwap'
{
    T temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

template <typename T>
void bubbleSort(T arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                mySwap(&arr[j],&arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[] = {3,2,1,6,10,25,15};
    bubbleSort(arr,7);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
