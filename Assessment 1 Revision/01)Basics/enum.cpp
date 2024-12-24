#include<iostream>
using namespace std;
int main(void)
{
    enum days {none,sun,mon,tue,wed,thu,fri,sat};
    enum days daynum = sun;
    cout<<"Day Number : "<<daynum;
}