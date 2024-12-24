#include <iostream>
using namespace std;

class Term {
public:
    int coefficient;
    int exponent;

    Term(int coeff = 0, int exp = 0) : coefficient(coeff), exponent(exp) {}
};

class Polynomial 
{
private:
    Term terms[10]; // Fixed-size array for terms
    int numTerms;   // Number of terms in the polynomial

public:
    // Constructor
    Polynomial() : numTerms(0) {}

    // Function to add a term to the polynomial
    void addTerm(int coefficient, int exponent) 
    {
        // Combine terms with the same exponent
        for (int i = 0; i < numTerms; ++i) {
            if (terms[i].exponent == exponent) {
                terms[i].coefficient += coefficient;
                return;
            }
        }
        // If it's a new term, add it
        if (numTerms < 10) {
            terms[numTerms++] = Term(coefficient, exponent);
        }
    }

    // Function to display the polynomial
    void display() const {
        for (int i = 0; i < numTerms; ++i) {
            if (terms[i].coefficient != 0) {
                cout << (terms[i].coefficient > 0 && i > 0 ? "+" : "") 
                     << terms[i].coefficient << "x^" << terms[i].exponent << " ";
            }
        }
        cout << endl;
    }


};

int main() {
    Polynomial p1, p2, p3;

    return 0;
}
