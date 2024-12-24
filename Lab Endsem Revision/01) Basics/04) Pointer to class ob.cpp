#include<iostream>
using namespace std;
class cl
{
    int i;
    public:
        cl(int num)
        {
            i = num;
        }
        int get_num()
        {
            return i;
        }
};
int main()
{
    cl obj(10);
    cl *p = &obj;
    cout<<"\nThe number is "<<p->get_num();
}