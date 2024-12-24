#include<iostream>
using namespace std;
class Date
{
    int day;
    int mon;
    int year;
    public:
        Date(int d=0,int m=0,int y=0)
        {
            day = d;    mon = m;     year = y;
        }
        friend istream &operator >> (istream &input, Date &d)
        {
            cout<<"\nEnter date : ";
            input>>d.day>>d.mon>>d.year;
            return input;
        }
        friend ostream &operator << (ostream &output, Date &d)
        {
            output<<"\nDate : "<<d.day<<"/"<<d.mon<<"/"<<d.year;
            return output;
        }
        Date operator = (const Date &d)
        {
            if(this != &d)
            {
                this->day = d.day;
                this->mon = d.mon;
                this->year = d.year;
            }
            return *this;
        }
        Date operator + (Date &d)
        {
            Date res;
            res.day = this->day + d.day;
            res.mon = this->mon;
            res.year = this->year;
            if(res.day>30)
            {
                res.mon++;
                res.day -= 30;
            }
            if(res.mon>12)
            {
                res.year++;
                res.mon -= 12;
            }
            return res; 
        }
        friend Date operator + (Date &d, int c)
        {
            Date res;
            res.day = d.day + c;
            res.mon = d.mon;
            res.year = d.year;
            if(res.day>30)
            {
                res.mon++;
                res.day -= 30;
            }
            if(res.mon>12)
            {
                res.year++;
                res.mon -= 12;
            }
            return res; 
        }
        void operator ++(int)
        {
            day++;
            if(day>30)
            {
                mon++;
                day -= 30;
            }
            if(mon>12)
            {
                year++;
                mon -= 12;
            }
        }

        void operator ++()
        {
            day++;
            if(day>30)
            {
                mon++;
                day -= 30;
            }
            if(mon>12)
            {
                year++;
                mon -= 12;
            }
        }

        void operator --()
        {
            day--;
            if(day<1)
            {
                mon--;
                day += 30;
            }
            if(mon<1)
            {
                year--;
                mon += 12;
            }
        }

        void operator --(int)
        {
            day--;
            if(day<1)
            {
                mon--;
                day += 30;
            }
            if(mon<1)
            {
                year--;
                mon += 12;
            }
        }

};
int main()
{
    Date d1,d2;
    cin>>d1;
    cout<<d1;
    d2 = d1;
    cout<<d2;
    Date d3;
    d3 = d1+d2;
    cout<<d3;
    Date d4;
    d4 = d1+15;
    cout<<d4;
    d4++;
    cout<<d4;
    --d4;
    cout<<d4;
}