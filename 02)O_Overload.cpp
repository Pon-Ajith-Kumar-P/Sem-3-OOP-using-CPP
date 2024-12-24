#include <iostream>
using namespace std;

class Complex 
{
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) 
    {
        real=r;
        imag=i;
    }

    Complex operator + (Complex& obj)
    {
        Complex result;
        result.real = real + obj.real;
        result.imag = imag + obj.imag;
        return result;
    }

    void input() 
    {
        cout << "Enter the real part: ";
        cin >> real;
        cout << "Enter the imaginary part: ";
        cin >> imag;
    }

    void display()
    {
        cout << real;
        if (imag >= 0) 
        {
            cout << " + " << imag << "i";
        } 
        else 
        {
            cout << " - " << -imag << "i";
        }
    }
};

int main() {
    Complex c1, c2; 
    cout << "Input for first complex number:" << endl;
    c1.input();
    cout << "Input for second complex number:" << endl;
    c2.input();

    Complex c3 = c1 + c2;
    cout << "c1 = ";
    c1.display();
    cout << endl;

    cout << "c2 = ";
    c2.display();
    cout << endl;

    cout << "c1 + c2 = ";
    c3.display();
    cout << endl;

    return 0;
}
