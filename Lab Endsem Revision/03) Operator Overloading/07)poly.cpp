#include<iostream>
using namespace std;
const int MAX = 100;

class Term
{
    public:
    int coeff;
    int exp;
    public:
        Term(int c=0,int e=0)
        {
            coeff=c;
            exp=e;
        }
};
class Poly
{
    Term terms[MAX];
    int termcount;
    public:
        Poly()
        {
            termcount = 0;
        }

        void addTerm(int coeff,int exp)
        {
            bool termadded = false;
            for(int i=0;i<termcount;i++)
            {
                if(terms[i].exp == exp)
                {
                    terms[i].coeff += coeff;       
                    termadded = true;
                    break;
                }
            }
            if(!termadded)
            {
                terms[termcount++] = Term(coeff,exp);
            }
        }

        void display()
        {
            for(int i=0;i<termcount;i++)
            {
                if(terms[i].coeff!=0)
                {
                    cout<<terms[i].coeff<<"x^"<<terms[i].exp;
                    if(i!=termcount-1 && terms[i+1].coeff>0)
                        cout<<" + ";
                }
                
            }
        cout<<endl;
        }        

        Poly operator + (const Poly &p)
        {
            Poly result = *this;
            for(int i=0;i<termcount;i++)
            {
                result.addTerm(p.terms[i].coeff,p.terms[i].exp);
            }
            return result;
        }

        Poly operator - (const Poly &p)
        {
            Poly result = *this;
            for(int i=0;i<termcount;i++)
            {
                result.addTerm(-p.terms[i].coeff,p.terms[i].exp);
            }
            return result;
        }

        Poly operator * (const Poly &p)
        {
            Poly result = *this;
            for(int i=0;i<termcount;i++)
            {
                for(int i=0;i<termcount;i++)
                    {
                        int newcoeff = terms[i].coeff * p.terms[i].coeff;
                        int newexp = terms[i].exp + p.terms[i].exp;
                        result.addTerm(newcoeff,newexp);
                    }
            }
            return result;
        }

        Poly &operator = (const Poly &p) 
        {
            if(this != &p)
            {
                termcount = p.termcount;
                for(int i=0;i<p.termcount;i++)
                {
                    terms[i] = p.terms[i];
                }
            }
            return *this;
        } 

        Poly &operator +=(const Poly &p)
        {
            *this = *this + p;
            return *this;
        }

        Poly &operator -=(const Poly &p)
        {
            *this = *this - p;
            return *this;
        }

        Poly &operator *=(const Poly &p)
        {
            *this = *this * p;
            return *this;
        }
};


int main() {
    Poly poly1, poly2, polyResult;

    // Add terms to Polynomial 1 (3x^2 + 2x + 1)
    poly1.addTerm(3, 2);
    poly1.addTerm(2, 1);
    poly1.addTerm(1, 0);

    // Add terms to Polynomial 2 (x + 1)
    poly2.addTerm(1, 1);
    poly2.addTerm(1, 0);

    cout << "Polynomial 1: ";
    poly1.display();

    cout << "Polynomial 2: ";
    poly2.display();

    // Addition of two polynomials
    polyResult = poly1 + poly2;
    cout << "Sum: ";
    polyResult.display();

    // Subtraction of two polynomials
    polyResult = poly1 - poly2;
    cout << "Difference: ";
    polyResult.display();

    // Multiplication of two polynomials
    polyResult = poly1 * poly2;
    cout << "Product: ";
    polyResult.display();

    // Compound addition (+=)
    poly1 += poly2;
    cout << "Polynomial 1 after +=: ";
    poly1.display();

    // Compound subtraction (-=)
    poly1 -= poly2;
    cout << "Polynomial 1 after -=: ";
    poly1.display();

    // Compound multiplication (*=)
    poly1 *= poly2;
    cout << "Polynomial 1 after *=: ";
    poly1.display();

    return 0;
}
