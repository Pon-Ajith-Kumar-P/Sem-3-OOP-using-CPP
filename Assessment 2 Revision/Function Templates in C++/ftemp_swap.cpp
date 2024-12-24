#include <iostream>
using namespace std;

template <typename T>
void mySwap(T *a, T *b)  // Renamed to 'mySwap'
{
    T temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10, y = 25;
    mySwap(&x, &y);  // Use the renamed function
    cout << "After mySwap\nx = " << x << "\ny = " << y << endl;
    return 0;
}
