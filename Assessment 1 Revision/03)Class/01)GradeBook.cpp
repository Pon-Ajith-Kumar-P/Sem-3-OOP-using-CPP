//Defining the member functions within the class
#include<iostream>
using namespace std;
class GradeBook
{
    public:
        void dispmsg() const  //->Represent that this function should not modify the object on which it is called
        {
            cout<<"The message was displayed successfully";
        }
};

int main(void)
{
    GradeBook object;
    object.dispmsg();
}