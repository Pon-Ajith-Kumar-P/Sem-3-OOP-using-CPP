#include <iostream>
using namespace std;

template<class T>
class Box {
    T val; // Private member
public:
    Box(T v) : val(v) {}

    // Friend function declaration
    template<class U>
    friend void display(Box<U> &b)
    {
    cout << "\nValue = " << b.val;
    }
};

int main() {
    Box<int> b(10);
    display(b);
    return 0;
}
