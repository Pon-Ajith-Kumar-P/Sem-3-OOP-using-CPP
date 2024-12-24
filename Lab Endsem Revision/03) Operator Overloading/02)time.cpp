#include<iostream>
using namespace std;
class Time
{
    int h;
    int m;
    public:
        friend istream &operator >> (istream &input,Time &t)
        {
            cout<<"\nEnter the time (hh mm) : ";
            input>>t.h>>t.m;
            return input;
        }

        friend ostream &operator << (ostream &output,Time &t)
        {
            output<<"\nTime : "<<t.h<<':'<<t.m;
            return output;
        }
        Time operator ++ ()     //Prefix
        {
            m++;
            if(m>60)
            {
                h++;
                m-=60;
            }
            return *this;
        }
        Time operator ++ (int)     //Postfix
        {
            m++;
            if(m>60)
            {
                h++;
                m-=60;
            }
            return *this;
        }
};
int main()
{
    Time t;
    cin>>t;
    cout<<t;
    ++t;
    cout<<t;
    t++;
    cout<<t;   
}