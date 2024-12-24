#include <iostream>
using namespace std;

const int MAX_TERMS = 100;  // Maximum number of terms in a polynomial

class Term {
public:
    int coeff;  // Coefficient
    int exp;    // Exponent

    Term(int c = 0, int e = 0) : coeff(c), exp(e) {}  // Constructor
};

class Polynomial {
private:
    Term terms[MAX_TERMS];  // Array to store terms
    int termCount;          // Number of terms in the polynomial

public:
    Polynomial() : termCount(0) {}  // Initialize with no terms

    // Add a new term to the polynomial
    void addTerm(int coeff, int exp) {
        bool termAdded = false;
        for (int i = 0; i < termCount; i++) {
            if (terms[i].exp == exp) {  // Combine terms with same exponent
                terms[i].coeff += coeff;
                termAdded = true;
                break;
            }
        }
        if (!termAdded) {
            terms[termCount++] = Term(coeff, exp);  // Add new term
        }
    }

    // Overload + operator for polynomial addition
    Polynomial operator+(const Polynomial& other) const {
        Polynomial result = *this;
        for (int i = 0; i < other.termCount; i++) {
            result.addTerm(other.terms[i].coeff, other.terms[i].exp);
        }
        return result;
    }

    // Overload - operator for polynomial subtraction
    Polynomial operator-(const Polynomial& other) const {
        Polynomial result = *this;
        for (int i = 0; i < other.termCount; i++) {
            result.addTerm(-other.terms[i].coeff, other.terms[i].exp);
        }
        return result;
    }

    // Overload * operator for polynomial multiplication
    Polynomial operator*(const Polynomial& other) const {
        Polynomial result;
        for (int i = 0; i < termCount; i++) {
            for (int j = 0; j < other.termCount; j++) {
                int newCoeff = terms[i].coeff * other.terms[j].coeff;
                int newExp = terms[i].exp + other.terms[j].exp;
                result.addTerm(newCoeff, newExp);
            }
        }
        return result;
    }

    // Overload = operator for assignment
    Polynomial& operator=(const Polynomial& other) {
        if (this != &other) {
            termCount = other.termCount;
            for (int i = 0; i < termCount; i++) {
                terms[i] = other.terms[i];
            }
        }
        return *this;
    }

    // Overload += operator for compound addition
    Polynomial& operator+=(const Polynomial& other) {
        *this = *this + other;
        return *this;
    }

    // Overload -= operator for compound subtraction
    Polynomial& operator-=(const Polynomial& other) {
        *this = *this - other;
        return *this;
    }

    // Overload *= operator for compound multiplication
    Polynomial& operator*=(const Polynomial& other) {
        *this = *this * other;
        return *this;
    }

    // Function to display the polynomial
    void display() const {
        for (int i = 0; i < termCount; i++) {
            if (terms[i].coeff != 0) {
                cout << terms[i].coeff << "x^" << terms[i].exp;
                if (i != termCount - 1 && terms[i + 1].coeff > 0) {
                    cout << " + ";
                }
            }
        }
        cout << endl;
    }
};

int main() {
    Polynomial poly1, poly2, polyResult;

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
