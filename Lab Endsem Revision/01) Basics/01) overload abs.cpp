#include<iostream>
using namespace std;
int abs(int i){
    return (i<0) ? -i : i;
}
double abs(double i){
    return (i<0) ? -i : i;
}
int main()
{
    int i=-10;
    double j = -10.5;
    cout<<"\nInteger Abs : "<<abs(i);
    cout<<"\nDouble Abs : "<<abs(j);

}