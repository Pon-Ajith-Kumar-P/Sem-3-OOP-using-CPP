#include<iostream>
using namespace std;
class Data
{
    int num;
    public:
        Data()
        {
            cout<<"\nDefault Constructor Called";
        }
        Data(int n)
        {
            cout<<"\nParameterized Constructor Called";
            num = n;
            cout<<"\nNum value = "<<num;
        }
        Data(Data &obj)
        {
            cout<<"\nCopy Constructor Called";
            num = obj.num;
            cout<<"\nCopy Num = "<<num;
        }
        ~Data()
        {
            cout<<"\nDestructor Called";
        }
};
int main()
{
    Data d1;
    Data d2(10);
    Data d3(d2);
}