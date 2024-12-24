#include<iostream>
using namespace std;
class Room
{
    int l;
    int b;
    public:
        friend istream &operator >> (istream &input,Room &r)
        {
            cout<<"\nEnter the length : ";
            input>>r.l;
            cout<<"\nEnter the breadth : ";
            input>>r.b;
            return input;
        }

        friend ostream &operator << (ostream &output,Room &r)
        {
            output<<"\nLength : "<<r.l;
            output<<"\nBreadth : "<<r.b;
            return output;
        }

};
int main()
{
    Room r;
    cin>>r;
    cout<<r;
}