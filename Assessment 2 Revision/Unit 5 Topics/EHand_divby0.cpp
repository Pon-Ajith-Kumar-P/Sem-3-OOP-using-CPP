#include<iostream>
using namespace std;
int main()
{
    cout<<"\nDivision by 0";
    try
    {
        int num=10;
        int den=0;
        if(den==0)
        {
            throw runtime_error("\nDivision by zero is not allowed");
        }
        cout<<"\nDivision = "<<num/den;    

    }
    catch(exception &e)
    {
        cout<<"\nException Caught";
        cout<<e.what();
    }
}