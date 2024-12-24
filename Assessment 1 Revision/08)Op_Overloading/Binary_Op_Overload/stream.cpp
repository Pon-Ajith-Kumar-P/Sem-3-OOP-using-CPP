#include<iostream>
using namespace std;
class Date
{
    int day,month,year;
    public:
        friend istream &operator >> (istream &input,Date &d)
        {
            cout<<"\nEnter the day,month and year (dd mm yy) : ";
            input>>d.day>>d.month>>d.year;
            return input;
        }
        friend ostream &operator << (ostream &output,Date &d)
        {
            output<<"\nDate : "<<d.day<<"/"<<d.month<<"/"<<d.year;
            return output;
        }
};
int main()
{
    Date d;
    cin>>d;
    cout<<d;
}