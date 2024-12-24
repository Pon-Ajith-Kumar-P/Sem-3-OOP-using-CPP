#include<iostream>
using namespace std;

template<class StackType>
class Stack
{
    StackType s[100];
    int tos;
    public:
    Stack()
    {
        tos = 0;
    }
    void push(StackType num);
    StackType pop();
};

template<class StackType>
void Stack<StackType>::push(StackType num)
{
    cout<<"\nPushed "<<num<<" into the stack";
    s[tos++]=num;
}

template<class StackType>
StackType Stack<StackType>::pop()
{
    return s[--tos];
}

int main()
{
    Stack<int> st;
    st.push(10);
    st.push(20);
    cout<<"\nPopped "<<st.pop()<<"out of the stack";
    st.push(30);
    st.push(40);
    cout<<"\nPopped "<<st.pop()<<"out of the stack";
}