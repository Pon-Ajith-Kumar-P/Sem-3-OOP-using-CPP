#include<iostream>
using namespace std;
class Distance
{
    int f;
    int i;
    public:
        friend istream &operator >> (istream &input,Distance &d)
        {
            cout<<"\nEnter the feet : ";
            input>>d.f;
            cout<<"\nEnter the inches : ";
            input>>d.i;
            return input;
        }

        friend ostream &operator << (ostream &output,Distance &d)
        {
            if(d.i>=12)
            {
                d.f++;
                d.i -=12;
            }
            output<<"\nFeet : "<<d.f;
            output<<"\nInch : "<<d.i;
            return output;
        }
        Distance operator + (Distance d)
        {
            Distance res;
            res.f = this->f + d.f;
            res.i = this->i + d.i;
            return res;
        }
        friend Distance operator - (Distance d1,Distance d2)
        {
            Distance res;
            res.f = d1.f - d2.f;
            res.i = d1.i - d2.i;
            return res;
        }
        bool operator < (Distance d)
        {
            if(this->f > d.f)
                return true;
            else if(this->f == d.f && this->i > d.i)
                return true;
            return false;
        }
};
int main()
{
    Distance d1,d2,d3,d4;
    cin>>d1;
    cout<<d1;
    cin>>d2;
    cout<<d2;
    d3 = d1+d2;
    cout<<d3;
    d4 = d1-d2;
    cout<<d4;
    
    if(d1<d2)
        cout<<"d2 is shorter";
    else
        cout<<"d1 is shorter";
}