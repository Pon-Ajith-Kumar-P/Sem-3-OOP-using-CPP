//Overloaded +,-,++,-- normally to add the locations
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
    loc operator +(loc);        //Adding Location
    loc operator -(loc);        //Subtracting Location
    loc operator ++();          //Prefix Increment Location
    loc operator --();          //Prefix Decrement Location
    loc operator =(loc);        //Assigning location

};

loc loc::operator +(loc l)
{
    loc temp;
    temp.lat = lat + l.lat;
    temp.lon = lon + l.lon;
    return temp;
}
loc loc::operator -(loc l)
{
    loc temp;
    temp.lat = lat - l.lat;
    temp.lon = lon - l.lon;
    return temp;
}
loc loc::operator ++()
{
    lat++;
    lon++;
    return *this;
}
loc loc::operator --()
{
    lat--;
    lon--;
    return *this;
}
loc loc::operator =(loc l)
{
    lat = l.lat;
    lon = l.lon;
    return *this;
}
int main()
{
    loc l1(10,25);
    ++l1;
    --l1;
    l1.getloc();
    loc l2(25,10);
    l2 = l2 - l1;
    l2.getloc();
    loc l3(1,2);
    l3 = l1;
    l3.getloc();
}