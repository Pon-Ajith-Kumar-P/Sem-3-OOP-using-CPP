#include <iostream>
#include <string>
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
        cout << "\nThe Stack \n";
        for (int i = tos - 1; i >= 0; i--) {
            cout << "ID: " << s[i].empid << ", Name: " << s[i].name << "\n";
        }
    }
};

// Template methods
template<class StackType>
void Stack<StackType>::push(StackType ob) 
{
    if (tos >= size) 
    {
        cout << "Stack Overflow\n";
        return;
    }
    s[tos] = ob;
    cout << "\nPushed Employee(ID: " << s[tos].empid << ", Name: " << s[tos].name << ") into the stack";
    tos++;
}

template<class StackType>
StackType Stack<StackType>::pop() 
{
    if (tos <= 0) 
    {
        cout << "Stack Underflow\n";
        return StackType(); // Return default object if stack is empty
    }
    return s[--tos];
}

// User-defined type Employee
class Employee 
{
public:
    int empid;
    string name;

    // Constructor for convenience
    Employee() : empid(0), name("") {}
    Employee(int id, string n) : empid(id), name(n) {}
};

int main() {
    Stack<Employee> empStack;

    // Push operations
    empStack.push(Employee(101, "Alice"));
    empStack.push(Employee(102, "Bob"));
    empStack.push(Employee(103, "Charlie"));

    // Display the stack
    empStack.display();

    // Pop operations
    Employee e1 = empStack.pop();
    cout << "\nPopped Employee(ID: " << e1.empid << ", Name: " << e1.name << ")";

    Employee e2 = empStack.pop();
    cout << "\nPopped Employee(ID: " << e2.empid << ", Name: " << e2.name << ")";

    // Display the stack after pops
    empStack.display();
    return 0;
}
