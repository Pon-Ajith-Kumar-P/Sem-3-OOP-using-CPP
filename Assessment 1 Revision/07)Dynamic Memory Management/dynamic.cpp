#include<iostream>
#include<stdlib.h>
using namespace std;
class A
{
    public:
        int *ptr;
        A()
        {
            cout<<"\nConstructor was called successfully"<<endl;
        }
        ~A()
        {
            cout<<"\nDestructor was called successfully"<<endl;
        }
};
int main()
{
    A *a = new A;
    cout<<"Object a created using the new operator"<<endl;
    delete a;
    cout<<"Object a was deleted using delete operator"<<endl;

    A *b = (A *)malloc(sizeof(A));
    cout<<"\nObject b created using the malloc() function"<<endl;
    free(b);
    cout<<"Object b was deleted using free() function"<<endl;

}