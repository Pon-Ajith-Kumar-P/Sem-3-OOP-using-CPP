//Overloaded ++,-- 
#include<iostream>
using namespace std;
class Time
{
    int hours;
    int minutes;
    public:
    Time(int h,int m)
    {
        hours = h;
        minutes = m;
    }
    void operator ++()
    {
        minutes++;
        if(minutes>=60)
        {
            hours++;
            minutes-=60;
        }
    }
    void operator ++(int)
    {
        minutes++;
        if(minutes>=60)
        {
            hours++;
            minutes-=60;
        }
    }

    void display()
    {
        cout<<"\nTime = "<<hours<<":"<<minutes;
    }
};
int main()
{
    Time t(5,59);
    ++t;
    t++;
    t.display();
}