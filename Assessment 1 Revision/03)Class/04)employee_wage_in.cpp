//Defining the member functions inside the class
#include<iostream>
using namespace std;
class Employee
{
    string name;
    float wage;
    public:
        void setDetail(string n,float w)
        {
            name = n;
            wage = w;
        }
        string getName()
        {
            return name;
        }
        int getWage()
        {
            return wage;
        }
        void dispmsg() 
        {
            cout<<"\n-----Employee Details-----";
            cout<<"\nName : "<<getName();
            cout<<"\nWage : "<<getWage();
        }
};

int main(void)
{
    string name;
    float wage;
    cout<<"\nEnter the name of the employee : ";
    getline(cin,name);
    cout<<"\nEnter the wage of the employee : ";
    cin>>wage;
    Employee emp;
    emp.setDetail(name,wage);
    emp.dispmsg(); 
}