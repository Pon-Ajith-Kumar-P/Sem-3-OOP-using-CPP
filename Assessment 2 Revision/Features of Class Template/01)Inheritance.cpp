#include<iostream>
using namespace std;

template<class T>
class Base
{
    protected:
        T value;
    public:
        Base(T i)
        {
            value = i;
        }
        void display()
        {
            cout<<"\nBase Value = "<<this->value;
        }
};

template<class T>
class Inter : public Base<T>
{
    public:
        Inter(T i) : Base<T>(i)
        {

        }
        void show()
        {
            cout<<"\nInter Value = "<<this->value;
        }
};

template<class T>
class Final : public Inter<T>
{
    public:
        Final(T i) : Inter<T>(i)
        {

        }
        void print()
        {
            cout<<"\nFinal Value = "<<this->value;
        }
};

int main()
{
    Final<int> f(10);
    f.print();
    f.show();
    f.display();
    return 0;
}