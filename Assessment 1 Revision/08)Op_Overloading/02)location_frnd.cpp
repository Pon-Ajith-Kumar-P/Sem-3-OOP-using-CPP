//Overloaded +,-,++,-- using friend function to add the locations
#include<iostream>
using namespace std;
class loc
{
    int lat,lon;
    public:
    loc() {}
    loc(int la,int lo)
    {
        lat = la;
        lon = lo;
    }
    void getloc()
    {
        cout<<"\nLatitude  : "<<lat;
        cout<<"\nLongitude : "<<lon;
    }
    friend loc operator +(loc,loc);        //Adding Location
    friend loc operator -(loc,loc);        //Subtracting Location
    friend loc operator ++(loc&);          //Prefix Increment Location
    friend loc operator --(loc&);          //Prefix Decrement Location
    friend loc operator ++(loc&,int);      //Postfix Increment Location
    friend loc operator --(loc&,int);      //Postfix Decrement Location
//    friend loc operator =(loc,loc);        ERROR //Assigning location

};

loc operator +(loc a,loc b)
{
    loc temp;
    temp.lat = a.lat + b.lat;
    temp.lon = a.lon + b.lon;
    return temp;
}
loc operator -(loc a,loc b)
{
    loc temp;
    temp.lat = a.lat - b.lat;
    temp.lon = a.lon - b.lon;
    return temp;
}
loc operator ++(loc& a)
{
    a.lat++;
    a.lon++;
    return a;
}
loc operator --(loc& a)
{
    a.lat--;
    a.lon--;
    return a;
}
loc operator ++(loc& a,int)
{
    loc temp = a;
    a.lat++;
    a.lon++;
    return temp;
}
loc operator --(loc& a,int)
{
    loc temp = a;
    a.lat--;
    a.lon--;
    return temp;
}
int main()
{
    loc l1(10,25);
    ++l1;
    l1--;
    l1.getloc();
    loc l2(25,10);
    l2 = l2 - l1;
    l2.getloc();
    loc l3(1,2);
    --l3;
    l3++;
    l3.getloc();
    loc l4(10,15);
    l4 = l3 + l4;
    l4.getloc();
}