#include<iostream>
using namespace std;
int main()
{
    cout<<"\nBefore Try Block";
    try
    {
        cout<<"\nInside Try Block";
        int x=-1;
        if(x<0)
        {
            throw runtime_error("x is less than 0");
        }
        cout<<"\nAfter throw will not be executed";    

    }
    catch(exception &e)
    {
        cout<<"\nException Caught";
        cout<<"\nAfter Caught (Will be executed)\n";
        cout<<e.what();
    }
}