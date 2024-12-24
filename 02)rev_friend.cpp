#include <iostream>
using namespace std;

class Number {
    int n;

public:
    Number(int num) : n(num) {}

    friend int reverse(Number);
};

int reverse(Number obj) {
    int rev = 0, temp = obj.n;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    Number obj(num);
    cout << "Reversed Number: " << reverse(obj) << endl;

    return 0;
}
