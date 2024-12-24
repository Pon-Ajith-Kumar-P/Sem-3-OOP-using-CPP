#include<iostream>
using namespace std;
int negative(int &n)
{
    return (-n);
}
int main()
{
    int neg = 10;
    cout<<"\nThe negative of " << neg << " = "<<negative(neg);
}

