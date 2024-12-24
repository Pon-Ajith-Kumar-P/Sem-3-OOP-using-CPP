#include<iostream>
using namespace std;
class Power
{
    int base;
    int exp;
    int val;
    public:
        Power(int b,int e)
        {
            base = b;
            exp = e;
            val = 1;
        }
        int get_pow()
        {
            if(exp == 0)
                return val;
            else 
            {
                for(int i=1;i<=exp;i++)
                {
                    val = val * base;
                }
                return val;
            }
        }
};
int main()
{
    int b,e;
    cout<<"\nEnter the base : ";
    cin>>b;
    cout<<"\nEnter the exponent : ";
    cin>>e;
    Power p(b,e);
    cout<<"\nThe power value = "<<p.get_pow();
}