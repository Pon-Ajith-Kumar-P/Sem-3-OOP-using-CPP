#include<iostream>
using namespace std;
class Box
{
    static int l;
    static int b;
    static int h;
    public:
    static void dimension()
    {
        cout<<"\nDimensions of the Box\n";
        cout<<"\nLength = "<<l;
        cout<<"\nBreadth = "<<b;
        cout<<"\nHeigth = "<<h;
    }
};
int Box :: l = 10;
int Box :: b = 15;
int Box :: h = 25;
int main(void)
{
    Box b;
    b.dimension();
}