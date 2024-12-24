#include<iostream>
using namespace std;
class Point
{
    int xloc;
    int yloc;
    public:
        Point()
        {
            xloc = 0;
            yloc = 0;
        }
        Point(int xval,int yval)
        {
            xloc = xval;
            yloc = yval;
        }

        friend istream &operator >> (istream &input,Point &p)
        {
            cout<<"\nEnter the xloc : ";
            input>>p.xloc;
            cout<<"\nEnter the yloc : ";
            input>>p.yloc;
            return input;
        }
        friend ostream &operator << (ostream &output,Point &p)
        {
            output<<"\nxloc = "<<p.xloc;
            output<<"\nyloc = "<<p.yloc;
            return output;
        }
        Point operator + (Point &p)
        {
            Point res;
            res.xloc = this->xloc + p.xloc;
            res.yloc = this->yloc + p.yloc;
            return res;
        }
        bool operator < (Point &p)
        {
            return (this->xloc < p.xloc || (this->xloc == p.xloc && this->yloc < p.yloc));
        }

        friend bool operator < (int x,Point &p)
        {
            return x < p.xloc;
        }

        friend bool operator < (Point &p, int y)
        {
            return p.yloc < y;
        }

};  
int main()
{
    Point p1;
    cin>>p1;
    cout<<p1;
    Point p2;
    cin>>p2;
    cout<<p2;
    Point p3;
    p3 = p1 + p2;
    cout<<p3;
    if(p1<p2)
        cout<<"\np1 is Smaller";
    if(3<p1)
        cout<<"\nx-coord of p1 is greater than 3";
    if(p1<3)
        cout<<"\ny-coord of p1 is less than 3";

}