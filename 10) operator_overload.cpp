#include <iostream>
using namespace std;
class FLOAT 
{
private:
    float value;
public:
    FLOAT(float v)
    {
        value=v;
    }
    FLOAT operator+(const FLOAT& other) const 
    {
        return FLOAT(value + other.value);
    }
    FLOAT operator-(const FLOAT& other) const 
    {
        return FLOAT(value - other.value);
    }
    FLOAT operator*(const FLOAT& other) const 
    {
        return FLOAT(value * other.value);
    }
    FLOAT operator/(const FLOAT& other) const 
    {
        if (other.value != 0) 
        {
            return FLOAT(value / other.value);
        } 
        else 
        {
            cout << "Error: Division by zero" << endl;
            return FLOAT(0); 
        }
    }
   void display() const 
   {
        cout << value << endl;
    }
};
int main() 
{
    FLOAT a(10.5), b(2.5);
    FLOAT sum = a + b;
    FLOAT diff = a - b;
    FLOAT prod = a * b;
    FLOAT quot = a / b; 
    cout<<"Operator Overloading\n";
    cout << "Sum: ";
    sum.display();
    cout << "Difference: ";
    diff.display();
    cout << "Product: ";
    prod.display();
    cout << "Quotient: ";
    quot.display();
    return 0;
}
