#include<iostream>
using namespace std;
class Class
{
    int num;
    public:
        Class(int n)
        {
            num = n;
        }
        int get_num();

};
inline int Class::get_num()
{
    return num;
}
int main()
{
    Class c(25);
    cout<<"\nThe Number = "<<c.get_num();
}