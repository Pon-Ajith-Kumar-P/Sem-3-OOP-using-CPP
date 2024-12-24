#include<iostream>
using namespace std;
const int size = 10;

template<class StackType>
class Stack
{
    private:
    StackType s[size];
    int tos;
    public:
        Stack()
        {
            tos = 0;
        }
        void push(StackType ob);
        StackType pop();
        void display()
        {
            cout<<"\nThe Stack \n";
            for(int i=tos-1;i>=0;i--)
            {
                cout<<s[i]<<"\t";
            }
        }
};

template<class StackType>
void Stack<StackType> :: push(StackType ob)
{
    s[tos] = ob;
    cout<<"\nPushed "<<s[tos++]<<" into the stack";
}

template<class StackType>
StackType Stack<StackType> :: pop()
{
    return s[--tos];
}

int main()
{
    Stack<int> stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    stk.push(50);
    stk.display();
    cout<<"\nPopped "<<stk.pop();
    cout<<"\nPopped "<<stk.pop();    
    cout<<"\nPopped "<<stk.pop();    
    cout<<"\nPopped "<<stk.pop(); 
    stk.display();
}