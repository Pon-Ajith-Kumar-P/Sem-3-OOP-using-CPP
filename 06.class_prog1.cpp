#include <iostream>
using namespace std;
class Room 
{
    double length;
    double breadth;
    double height;

   public:
    Room(int l, int b, int h)
    {   
        length = l;
        breadth = b;
        height = h;
    }
    double calculate_area() 
    {
        return length * breadth;
    }

    double calculate_volume() 
    {
        return length * breadth * height;
    }
};
int main() 
{
    int length, breadth, height;
    cout<<"Enter the length (l) = ";
    cin>>length;
    cout<<"Enter the breadth (b) = ";
    cin>>breadth;
    cout<<"Enter the height (h) = ";
    cin>>height;
    Room room1(length,breadth,height);
    cout << "Area of Room = " << room1.calculate_area() << " sq.units \n";
    cout << "Volume of Room = " << room1.calculate_volume() << " cu.units";
    return 0;
}