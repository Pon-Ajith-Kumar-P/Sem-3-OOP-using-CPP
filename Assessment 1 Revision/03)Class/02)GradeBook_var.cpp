//Defining the member functions within the class
#include<iostream>
using namespace std;
class GradeBook
{
    public:
        void dispmsg(string name) 
        {
            cout<<"\nHello. "<<name<<"\nThe message was displayed successfully";
        }
};

int main(void)
{
    GradeBook object;
    cout<<"Enter your name : ";
    string name;
    getline(cin,name);
    object.dispmsg(name);
}