#include<iostream>
using namespace std;
class Term
{
    public:
    int coefficient;
    int exponent;
    public:
        Term(int coeff = 0,int expo = 0)
        {
            coefficient = coeff;
            exponent = expo;
        }
};
class Polynomial
{
    Term terms[10];
    int numTerms;
    public:
        Polynomial()
        {
            numTerms = 0;
        }
        void addTerm(int coeff,int expo)
        {
            for(int i=0;i<numTerms;i++)
            {
                if(terms[i].exponent==expo)
                {
                    terms[i].coefficient += coeff;
                    return;
                }
            }
            if(numTerms<10)
            {
                terms[numTerms] = Term(coeff,expo);
                numTerms++;
            }
        }

        void display()
        {
            cout<<endl;
            for(int i=0;i<numTerms;i++)
            {
                if(terms[i].coefficient!=0)
                {
                    cout<<(terms[i].coefficient>0 && i>0 ? "+" : "")
                        <<terms[i].coefficient<<"x^"<<terms[i].exponent<<" ";
                }
            }
        }
        Polynomial operator + (Polynomial &p)
        {
            Polynomial result = *this;
            for(int i=0;i<p.numTerms;i++)
            {
                result.addTerm(p.terms[i].coefficient,p.terms[i].exponent);
            }            
            return result;
        }
        Polynomial operator - (Polynomial &p)
        {
            Polynomial result = *this;
            for(int i=0;i<p.numTerms;i++)
            {
                result.addTerm(-p.terms[i].coefficient,p.terms[i].exponent);
            }            
            return result;
        }
        Polynomial operator = (const Polynomial &p)
        {
            if(this != &p)
            {
                this->numTerms = p.numTerms ;
                for(int i=0;i<p.numTerms;i++)
                {
                    this->terms[i] = p.terms[i];
                }
            }
           return *this;
        }
        Polynomial operator * (Polynomial &p)
        {
            Polynomial result;
            for(int i=0;i<this->numTerms;i++)
            {
                for(int j=0;j<p.numTerms;j++)
                {
                    result.addTerm(this->terms[i].coefficient * p.terms[i].coefficient,
                                    this->terms[i].exponent + p.terms[i].exponent);
                }
            }            
            return result;
        }
        Polynomial operator += (Polynomial &p)
        {
            *this = *this + p;
            return *this;
        }
        Polynomial operator -= (Polynomial &p)
        {
            *this = *this - p;
            return *this;
        }
        Polynomial operator *= (Polynomial &p)
        {
            *this = *this * p;
            return *this;
        }
};
int main()
{
    Polynomial p1,p2,p3,p4,p5;
    p1.addTerm(2, 2);
    p1.addTerm(1, 1);
    cout << "Polynomial 1: ";
    p1.display();

    p2.addTerm(2, 2);
    p2.addTerm(1, 1);
    cout << "\nPolynomial 2: ";
    p2.display();

    p3 = p1 + p2;
    cout << "\nPolynomial 3: ";
    p3.display();

    p4 = p1 - p2;
    cout << "\nPolynomial 4: ";
    p4.display();

    p5 = p1 * p2;
    cout << "\nPolynomial 5: ";
    p5.display();

}