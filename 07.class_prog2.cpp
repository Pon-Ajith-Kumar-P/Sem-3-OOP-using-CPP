#include <iostream>
using namespace std;

class Calculator 
{
private:
    float a, b;
public:
    // Constructor
    Calculator(int x, int y) : a(x), b(y) {}
    float add() 
    {
        return a + b;
    }
    float sub() 
    {
        return a - b;
    }
    float mul() 
    {
        return a * b;
    }
    float div() 
    {
        return a / b;
    }
};
int main() 
{
    float a,b;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    Calculator calc(a, b);
    cout << "Sum        : " << calc.add() << endl;
    cout << "Difference : " << calc.sub() << endl;
    cout << "Product    : " << calc.mul() << endl;
    cout << "Quotient   : " << calc.div() << endl;
    return 0;
}