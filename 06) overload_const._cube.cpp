#include <iostream>
using namespace std;
class Cube 
{
    int n;
    public:
        Cube() 
        {
            cout << "Enter a n for default constructor: ";
            cin >> n;
            cout << "Cube of " << n << " is " << n * n * n << endl;
        }
        Cube(int n) 
        {
            cout << "Cube of " << n << " is " << n * n * n << endl;
        }
};
int main() 
{
    Cube c1;
    int num;
    cout << "Enter a n for parameterized constructor: ";
    cin >> num;
    Cube c2(num);
    return 0;
}
