#include<iostream>
using namespace std;
class Person        //Base Class
{
    char name[25];
    char sex;
    int age;

    public:
        void readperson()
        {
            cout<<"Name : ";
            cin>>name;
            cout<<"Sex : ";
            cin>>sex;
            cout<<"Age : ";
            cin>>age;
        }

        void dispperson()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Sex : "<<sex<<endl;
            cout<<"Age : "<<age<<endl;
        }
};

class Sports : public virtual Person        //Derived Class of Person
{
    private:
        char name[25];
        int score;
    protected:
        void readdata()
        {
            cout<<"Game Played : ";
            cin>>name;
            cout<<"Game Score : ";
            cin>>score;
        }
        void dispdata()
        {
            cout<<"Sports Played : "<<name<<endl;
            cout<<"Game Score : "<<score<<endl;
        }
        int sportscore()
        {
            return score;
        }
};

class Student : public virtual Person   //Derived Class of Person
{
    private:
        int rno;
        char branch[20];
    public:
        void readdata()
        {
            cout<<"Roll Number : ";
            cin>>rno;
            cout<<"Branch Studying : ";
            cin>>branch;
        }
        void dispdata()
        {
            cout<<"Roll Number : "<<rno<<endl;
            cout<<"Branch : "<<branch<<endl;
        }
};

class Exam : public Student     //Derived class the Student
{
    protected:
        int s1mark;
        int s2mark;
    public:
        void readdata()
        {
            cout<<"Marks Scored in Subject 1 : ";
            cin>>s1mark;
            cout<<"Marks Scored in Subject 2 : ";
            cin>>s2mark;
        }
        void dispdata()
        {
            Student::dispdata();
            cout<<"Marks Scored in Subject 1 : "<<s1mark<<endl;
            cout<<"Marks Scored in Subject 2 : "<<s2mark<<endl;
            cout<<"Total Marks Scored : "<<totalmarks()<<endl;
        }
        int totalmarks()
        {
            return s1mark + s2mark;
        }
};

class Result : public Exam, public Sports       //Derived class of both Exam and Sports
{
    private:
        int total;
    public:
        void readdata()
        {
            readperson();
            Student::readdata();
            Exam::readdata();
            Sports::readdata();
        }
        void displaydata()
        {
            dispperson();
            Student::dispdata();
            Exam::dispdata();
            Sports::dispdata();
            cout<<"Overall Performance (exam + sports)\n";
            cout<<percentage()<<"%";
        }
        int percentage()
        {
            return (Exam::totalmarks() + sportscore())/3;
        }
};
int main()
{
    Result s;
    cout<<"Enter data for Student"<<endl;
    s.readdata();
    cout<<"Student Details"<<endl;
    s.displaydata();
}