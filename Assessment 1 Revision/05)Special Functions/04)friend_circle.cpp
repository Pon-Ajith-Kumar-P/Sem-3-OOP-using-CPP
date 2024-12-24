//Create a class called Circle that has a private member variable radius. 
//Implement a friend function to calculate the area of the circle.
//Requirements:
//The class should have a constructor to initialize the radius.
//The friend function should take a Circle object as a parameter and return the area.
#include<iostream>
using namespace std;
class Circle
{
    float radius;
    public:
        Circle(int r)
        {
            radius = r;
        }
        friend void cal_area(Circle);
};
void cal_area(Circle c)
{
    cout<<"\nArea of the circle = "<<3.14*c.radius*c.radius<<" sq.units";
}
int main()
{
    float rad;
    cout<<"\nEnter Radius : ";
    cin>>rad;
    Circle cir(rad);
    cal_area(cir);
}