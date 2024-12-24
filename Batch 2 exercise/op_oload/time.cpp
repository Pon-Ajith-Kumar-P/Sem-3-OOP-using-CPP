#include<iostream>
using namespace std;
class Time
{
    int hour;
    int min;
    public:
        Time(int h=0,int m=0)
        {
            hour = h;
            min = m;
        }

        friend istream &operator >>(istream &input,Time &t)
        {
            cout<<"\nEnter hour  : ";
            input>>t.hour;
            cout<<"\nEnter min  : ";
            input>>t.min;
            return input;
        }

        friend ostream &operator <<(ostream &output,Time &t)
        {
            output<<t.hour<<':'<<(t.min>10 ? "0" : "")<<t.min;
            return output;
        }

        //Prefix
        void operator ++ ()
        {
            min++;
            if(min>=60)
            {
                hour++;
                min-=60;
            }
        }

        //Postfix
        void operator ++ (int)
        {
            min++;
            if(min>=60)
            {
                hour++;
                min-=60;
            }
        }

        //Prefix
        void operator -- ()
        {
            min--;
            if(min<0)
            {
                hour--;
                min+=60;
            }
        }

        //Postfix
        void operator -- (int)
        {
            min--;
            if(min<0)
            {
                hour--;
                min+=60;
            }
        }

        Time &operator = (Time &t)
        {
            this->hour = t.hour;
            this->min = t.min;
            return *this;
        }

        bool operator !=(Time &t)
        {
            if(this->hour!=t.hour || this->min!=t.min)
                return true;
            return false;
        }

        void display()
        {
            cout<<hour<<':'<<(min<10 ? "0" : "")<<min<<endl;
        }
};

int main()
{
    Time t1(6,30);
    ++t1;
    t1.display();
    t1++;
    t1.display();
    --t1;
    t1.display();
    t1--;
    t1.display();
    Time t2;
    t2 = t1;
    t2.display();
    if(t1!=t2)
        cout<<"Not Equal";
    else
        cout<<"Equal";

    Time *t5 = new Time(3,45);
    t5->display();

    Time timearray[3] = {Time(10,40),Time(12,30),Time(2,40)};
    for(int i=0;i<3;i++)
    {
        timearray[i].display();
    }
}