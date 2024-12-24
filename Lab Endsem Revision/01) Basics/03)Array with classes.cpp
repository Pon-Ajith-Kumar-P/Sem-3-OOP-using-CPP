#include<iostream>
using namespace std;
class cl
{
    int i;
    public:
        void set_i(int num)
        {
            i = num;
        }
        int get_i()
        {
            return i;
        }
};
int main()
{
    //Created the array of objects
    cl obj[5];
    //Reading the elements
    int num;
    for(int i=0;i<5;i++)
    {
        cout<<"\nEnter integer "<<i+1<<" : ";
        cin>>num;
        obj[i].set_i(num);
    }
    //Displaying the array elements
    for(int i=0;i<5;i++)
    {
        cout<<obj[i].get_i()<<'\t';
    }

}