#include<iostream>
using namespace std;

template<class type1, class type2>
class Sample
{
    private:
        type1 x;
        type2 y;
    public:
        Sample(type1 i,type2 j)
        { 
            x = i;
            y = j;
        }
        void display()
        {
            cout<<"\nx = "<<x<<"\ny = "<<y;
        }
};
int main()
{
    Sample<int,double> s1(10,25.0);
    s1.display();
    Sample<string,int> s2("Pon Ajith Kumar",10);
    s2.display();
    Sample<int,char> s3(25,'H');
    s3.display();
    
}