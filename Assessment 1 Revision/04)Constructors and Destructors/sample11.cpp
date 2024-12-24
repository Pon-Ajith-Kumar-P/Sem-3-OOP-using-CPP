#include<iostream>
using namespace std;
class Data
{
    int i,j;
    public:
        Data()
        {
            cout<<"\nDefault Constructor";
        }   
        void disp() {  cout<<i<<' '<<j; }
        Data(int a,int b)
        {
            cout<<"\nParameterized Constructor\n";
            i=a;
            j=b;
            disp();
        }
        Data(Data &obj)
        {
            cout<<"\nCopy Constructor\n";
            i=obj.i;
            j=obj.j;
            disp();
        }
};

int main(void)
{
    Data d1;
    Data d2(10,25);
    Data d3(d2);
}