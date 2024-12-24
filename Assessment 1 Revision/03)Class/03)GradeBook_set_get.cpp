//Defining the member functions within the class
#include<iostream>
using namespace std;
class GradeBook
{
    string n;
    public:
        void setname(string name)       //Mutators
        {
            n=name;
        }
        string getname()                //Accessors
        {
            return n;
        }
        void dispmsg() 
        {
            cout<<"\nHello. "<<getname()<<"\nThe message was displayed successfully";
        }
};

int main(void)
{
    GradeBook object;
    cout<<"Enter your name : ";
    string name;
    getline(cin,name);
    object.setname(name);
    object.getname();
    object.dispmsg();
}