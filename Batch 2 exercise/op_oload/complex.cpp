#include<iostream>
using namespace std;
class Complex
{
    int real;
    int ima;
    public:
        Complex(int r=0,int i=0)
        {
            real = r;
            ima = i;
        }

        friend istream &operator >> (istream &input, Complex &c)
        {
            cout<<"\nEnter the real part : ";
            input>>c.real;
            cout<<"\nEnter the imaginary part : ";
            input>>c.ima;
            return input;
        } 

        friend ostream &operator << (ostream &output, Complex &c)
        {
            if(c.ima == 0)
            {
                output<<"\nComplex Number = "<<c.real;
            }
            else if(c.ima < 0)
            {
                output<<"\nComplex Number : "<<c.real<<" - "<<-(c.ima)<<" i";
            }
            else 
            {
                output<<"\nComplex Number : "<<c.real<<" + "<<c.ima<<" i";
            }
            return output;
        }

        Complex operator + (Complex &c)
        {
            Complex res;
            res.real = this->real + c.real;
            res.ima = this->ima + c.ima;
            return res;
        }

        Complex operator - ()
        {
            return Complex(-real,-ima);
        }

};
int main()
{
    Complex c1;
    cin>>c1;
    cout<<c1;
    Complex c2;
    cin>>c2;
    cout<<c2;
    Complex c3;
    c3 = c1 + c2;
    cout<<c3;
    Complex c4;
    c4 = -(c3);
    cout<<c4;
}