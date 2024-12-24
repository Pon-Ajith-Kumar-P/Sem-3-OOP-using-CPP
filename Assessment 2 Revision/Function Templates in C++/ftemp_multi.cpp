#include<iostream>
using namespace std;
template<typename T,typename U>
void display(T num, U name)
{
    cout<<"\nRoll No : "<<num;
    cout<<"\nName    : "<<name;
}
int main()
{
    display(10,"Pon Ajith Kumar");
    display(25,"...... .......");
}