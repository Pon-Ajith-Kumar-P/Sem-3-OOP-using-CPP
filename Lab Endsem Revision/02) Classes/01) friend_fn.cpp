#include<iostream>
using namespace std;
class Reverse
{
    int num;
    public:
        Reverse(int n)
        {
            num = n;
        }
        friend int rev(Reverse);
        int get_rev()
        {
            return num;
        }
};
int rev(Reverse r)
{
    int rev = 0;
    int temp;
    while(r.num != 0)
    {
        temp = r.num % 10;
        rev = (rev*10) + temp;
        r.num /= 10;
    }
    return rev;
}
int main()
{
    Reverse r(12345);
    cout<<"\nReverse of "<<r.get_rev()<<" = "<<rev(r);
}