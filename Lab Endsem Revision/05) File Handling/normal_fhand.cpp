#include<iostream>
#include<fstream>
using namespace std;
class Student
{
    int roll;
    string name;
    float fees;
    public:
        void input()
        {
            cout<<"\nEnter your roll number : ";
            cin>>roll;
            cin.ignore();
            cout<<"\nEnter your name : ";
            getline(cin,name);
            cout<<"\nEnter your fees : ";
            cin>>fees;
            cin.ignore();
        }
        void display()
        {
            cout<<"\nRoll No.  : "<<roll;
            cout<<"\nName : "<<name;
            cout<<"\nFees : "<<fees;
            cout<<"\n-------------------------";
        }
        void writetofile(ofstream &fout)
        {
            fout<<roll<<endl<<name<<endl<<fees<<endl;
        }        
        void readfromfile(ifstream &fin)
        {
            fin>>roll;
            fin.ignore();
            fin>>name;
            fin>>fees;
            fin.ignore();
        }
};

int main()
{
    Student s;
    char choice;
    string filepath = "simple.txt";
    //Writing
    ofstream fout(filepath, ios::in | ios::trunc);
    if(!fout)
    {
        cerr<<"\nError";
        return 1;
    }
    do
    {        
            s.input();
            s.writetofile(fout);
            cout<<"\nDo you want to enter another record ? (y/n) : ";
            cin>>choice;
    }while(choice=='y'||choice=='Y');
    fout.close();
    //Reading
    ifstream fin(filepath);
    if(!fin)
    {
        cerr<<"\nError";
        return 1;
    }
    while(fin.peek()!=EOF)
    {
        s.readfromfile(fin);
        s.display();
    }
    fin.close();
}