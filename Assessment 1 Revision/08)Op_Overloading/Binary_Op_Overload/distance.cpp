#include<iostream>
using namespace std;
class Distance
{
    int feet,inches;
    public:
        friend istream &operator>>(istream &input,Distance &d)
        {
            cout<<"\nEnter the feet : ";
            input>>d.feet;
            cout<<"\nEnter the inches : ";
            input>>d.inches;
            return input;
        }
        friend ostream &operator<<(ostream &output,Distance &d)
        {
            output<<"\n"<<d.feet<<" feet "<<d.inches<<" inches";
            return output;
        }
        Distance operator + (Distance d)
        {
            Distance temp;
            temp.feet = this->feet + d.feet;
            temp.inches = this->inches + d.inches;
            if(temp.inches>11)
            {
                temp.feet++;
                temp.inches -= 12;
            }
            return temp;
        }
        bool operator < (Distance d)
        {
            if(this->feet < d.feet)
                return true;
            else if(this->feet==d.feet && this->inches<d.inches)
                return true;
            else
                return false;
        }
};
int main()
{
    Distance d1,d2,d3;
    cin>>d1;
    cin>>d2;
    cin>>d3;
    cout<<d1;
    cout<<d2;
    cout<<d3;
    d3 = d1+d2;
    cout<<d3;
    if(d1<d2)
        cout<<"\nd1 is shorter.";
    else 
        cout<<"\nd2 is shorter";
}