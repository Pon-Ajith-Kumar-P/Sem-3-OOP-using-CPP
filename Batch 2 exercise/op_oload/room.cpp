#include<iostream>
using namespace std;
class Room
{
    int length;
    int breadth;
    int height;
    public:
        friend istream &operator >> (istream &input,Room &r)
        {
            cout<<"\nEnter the length : ";
            input>>r.length;
            cout<<"\nEnter the breadth : ";
            input>>r.breadth;
            cout<<"\nEnter the height : ";
            input>>r.height;
            return input;
        }
        friend ostream &operator << (ostream &output,Room &r)
        {
            output<<"\nLength = "<<r.length;
            output<<"\nBreadth = "<<r.breadth;
            output<<"\nHeight = "<<r.height;
            return output;
        }
};
int main()
{
    Room r;
    cin >> r;
    cout << r;
}