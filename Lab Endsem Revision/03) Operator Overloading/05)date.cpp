#include<iostream>
using namespace std;
class Date
{
    int d;
    int m;
    int y;
    public:
        friend istream &operator >> (istream &input,Date &dt)
        {
            cout<<"\nEnter the date (dd mm yyyy) : ";
            input>>dt.d>>dt.m>>dt.y;
            return input;
        }

        friend ostream &operator << (ostream &output,Date &dt)
        {
            output<<"\nDate : "<<dt.d<<'/'<<dt.m<<'/'<<dt.y;
            return output;
        }

        Date operator ++ ()     //Prefix
        {
            d++;
            if(d>30)
            {
                m++;
                d-=30;
            }
            if(m>12)
            {
                y++;
                m-=12;
            }
            return *this;
        }

        Date operator ++ (int)     //Postfix
        {
            Date temp = *this;
            d++;
            if(d>30)
            {
                m++;
                d-=30;
            }
            if(m>12)
            {
                y++;
                m-=12;
            }
            return temp;
        }
        
        Date operator = (const Date &dt)
        {
            if(this != &dt)
            {
                d = dt.d;
                m = dt.m;
                y = dt.y;
            }
            return *this;
        }

        Date operator + (Date &dt)
        {
            Date res;
            res.d = d + dt.d;
            res.m = m + dt.m;
            res.y = y + dt.y;
            return res;
        }
};
int main()
{
    Date t1,t2,t3;
    cin>>t1;
    cout<<t1;
    cin>>t2;
    cout<<t2;
    t3 = t1+t2;
    cout<<t3;

}