#include <iostream>
using namespace std;

template <typename T>
class Counter 
{
private:
    static int count; // Static member to keep track of instances
public:
    // Constructor
    Counter() 
    {
        count++;
    }

    // Destructor
    ~Counter() 
    {
        count--;
    }

    // Static member function to get the count
    static int getCount() 
    {
        return count;
    }
};

// Define and initialize the static member
template <typename T>
int Counter<T>::count = 0;

int main() {
    // Creating instances of different types
    Counter<int> obj1;
    Counter<int> obj2;
    cout << "Number of int objects: " << Counter<int>::getCount() << endl;

    {
        Counter<double> obj3;
        cout << "Number of double objects: " << Counter<double>::getCount() << endl;
    } // obj3 goes out of scope here

    cout << "Number of double objects after obj3 is destroyed: " << Counter<double>::getCount() << endl;
    cout << "Number of int objects: " << Counter<int>::getCount() << endl;

    return 0;
}
