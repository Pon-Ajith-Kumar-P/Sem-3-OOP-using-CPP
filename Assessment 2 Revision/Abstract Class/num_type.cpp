#include<iostream>
using namespace std;
class Number
{
    protected:
        int val;
    public:
        void setval(int x)
        {
            val = x;
        }
        virtual void show() = 0;
};
class DecType : public Number
{
    public:
        void show() override
        {
            cout << "\nDec Num = " << val;
        }
};
class OctType : public Number
{
    public:
        void show() override
        {
            cout << "\nOct Num = " << oct << val;
        }
};
class HexType : public Number
{
    public:
        void show() override
        {
            cout << "\nHex Num = "  << hex << val;
        }
};

int main()
{
    DecType d;
    OctType o;
    HexType h;
    d.setval(10);
    o.setval(10);
    h.setval(10);
    d.show();
    o.show();
    h.show();
    return 0;
}


