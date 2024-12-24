#include<iostream>
using namespace std;
class Complex
{
    int r;
    int i;
    public:
        friend istream &operator >> (istream &input,Complex &c)
        {
            cout<<"\nEnter real part : ";
            input>>c.r;
            cout<<"\nEnter imag part : ";
            input>>c.i;
            return input;
        }

        friend ostream &operator << (ostream &output,Complex &c)
        {
            output<<"\nComplex Number : "<<c.r<<"+("<<c.i<<")i";
            return output;
        }

        Complex operator + (Complex c)
        {
            Complex res;
            res.r = r + c.r;
            res.i = i + c.i;
            return res;
        }

        Complex operator - (Complex c)
        {
            Complex res;
            res.r = r - c.r;
            res.i = i - c.i;
            return res;
        }
        
        Complex operator * (Complex c)
        {
            Complex res;
            res.r = (r*c.r) - (i+c.i);
            res.i = (r*c.i) + (i+c.r);
            return res;
        }

        Complex operator = (const Complex &c)
        {
            if(this!=&c)
            {
                r = c.r;
                i = c.i;
            }
            return *this;
        }

        Complex operator ++ ()
        {
            r++;
            i++;
            return *this;
        } 

        Complex operator ++ (int)
        {
            r++;
            i++;
            return *this;
        } 

        Complex operator -- ()
        {
            r--;
            i--;
            return *this;
        } 

        Complex operator -- (int)
        {
            r--;
            i--;
            return *this;
        } 

        Complex operator += (Complex c)
        {
            r += c.r;
            i += c.i;
            return *this;
        }
};

int main()
{
    Complex c1,c2,c3,c4,c5,c6,c7;
    cin>>c1;
    cout<<c1;
    cin>>c2;
    cout<<c2;
    c3 = c1 + c2;
    cout<<c3;
    c4 = c1 - c2;
    cout<<c4;
    c5 = ++c1;
    cout<<c5;
    c6 = c1--;
    cout<<c6;
    c7 = c1 * c2;
    cout<<c7;
    c1+=c2;
    cout<<c1;
}