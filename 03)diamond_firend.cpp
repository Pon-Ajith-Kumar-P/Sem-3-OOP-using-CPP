#include <iostream>
using namespace std;
class Diamond 
{
    int size;
public:
    Diamond(int s)
    {
        size=s; 
    }
    friend void displayDiamond(Diamond);
};

void displayDiamond(Diamond obj) 
{
    int n = obj.size;
    for (int i=1;i<=n;i++) 
    {
        for (int j=i;j<n;j++)
            cout << " ";
        for (int j=1;j<=(2*i-1);j++)
            cout << "*";
        cout << endl;
    }
    for (int i=n-1;i>=0;i--) 
    {
        for (int j=i;j<n;j++)
            cout << " ";
        for (int j=1;j<=(2*i-1);j++)
            cout << "*";
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter the size of the diamond: ";
    cin >> size;

    Diamond d(size);
    displayDiamond(d);

    return 0;
}
