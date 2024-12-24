#include<iostream>
using namespace std;

class Shape 
{
protected:
    float length, width;
public:
    void setdimension(float x, float y = 0) 
    {
        length = x;
        width = y;
    }
};

class Circle : public Shape 
{
public:
    void area() 
    {
        cout << "Circle area: " << 3.14f * length * length << " sq.units\n";
    }
};

class Rectangle : public Shape 
{
public:
    void area() 
    {
        cout << "Rectangle area: " << length * width << " sq.units\n";
    }
};

int main() 
{
    Circle c;
    Rectangle r;
    float rad, len, wid;
    cout << "Enter radius of the circle: ";
    cin >> rad;
    c.setdimension(rad);
    c.area();
    cout << "Enter length of the rectangle: ";
    cin >> len;
    cout << "Enter width of the rectangle: ";
    cin >> wid;
    r.setdimension(len, wid);
    r.area();
    return 0;
}
