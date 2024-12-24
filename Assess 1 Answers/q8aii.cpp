#include <iostream>
using namespace std;
class Complex {
public:
    double real;
    double imag;
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    Complex operator+(Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }
    Complex operator-(Complex& other) {
        return Complex(real - other.real, imag - other.imag);
    }
    Complex operator*(Complex& other) {
        return Complex(real * other.real - imag * other.imag,
                       real * other.imag + imag * other.real);
    }
    bool operator==(Complex& other) {
        return (real == other.real) && (imag == other.imag);
    }
    void display() {
        cout << real << "+(" << imag << "i)";
    }
};

int main() {
    Complex arr[100];
    Complex rarr[100];
    int n;
    cout << "\nEnter the number of complex numbers: ";
    cin >> n;
    cout << "\nEnter real and imaginary parts of each complex number:\n";
    for (int i = 0; i < n; i++) {
        double r,k;
        cout << "Complex " << i + 1 << ": ";
        cin >> r >> k;
        arr[i] = Complex(r, k);
    }
    int s = 0;
    for (int i = 0; i < n - 1; ++i) {
        Complex sum = arr[i] + arr[i + 1];
        rarr[s++] = sum;
    }
    cout << "\nResultant array after addition:\n";
    for (int i = 0; i < s; ++i) {
        rarr[i].display();
        cout << endl;
    }
    bool ch = false;
    for (int i = 0; i < s; ++i) {
        for (int j = i + 1; j < s; ++j) {
            if (rarr[i] == rarr[j]) {
                cout<<"\n";rarr[i].display();cout<<" appears more than once.";
                ch=true;
            }
        }
    }
    if (ch==false) {
        cout << "No duplicates found.\n";
    }
    return 0;
}