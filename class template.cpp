#include <iostream>
using namespace std;

// Template class for Stack
template <typename T>
class Stack 
{
    T arr[100]; // Simple fixed-size array
    int top;

public:
    Stack() : top(-1) {}

    void push(T value) 
    {
        if (top >= 99) 
        {
            cout << "Stack overflow" << endl;
            return;
        }
        arr[++top] = value;
        cout << "Pushed " << value << " into the stack" << endl;
    }

    void pop() 
    {
        if (top < 0) 
        {
            cout << "Stack underflow" << endl;
            return;
        }
        cout << "Popped " << arr[top--] << " from the stack" << endl;
    }

    void display() 
    {
        if (top < 0) 
        {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; --i) 
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Template class for Queue
template <typename T>
class Queue 
{
    T arr[100]; // Simple fixed-size array
    int front, rear;

public:
    Queue() : front(-1), rear(-1) {}

    void push(T value) 
    {
        if (rear >= 99) 
        {
            cout << "Queue overflow" << endl;
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = value;
        cout << "Pushed " << value << " into the queue" << endl;
    }

    void pop() 
    {
        if (front == -1 || front > rear) 
        {
            cout << "Queue underflow" << endl;
            return;
        }
        cout << "Popped " << arr[front++] << " from the queue" << endl;
        if (front > rear) 
        {
            front = rear = -1; // Reset to empty
        }
    }

    void display() 
    {
        if (front == -1 || front > rear) 
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; ++i) 
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() 
{
    Stack<int> stack;
    Queue<int> queue;

    // Testing stack
    cout << "Stack operations:" << endl;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.display();
    stack.pop();
    stack.display();

    // Testing queue
    cout << "\nQueue operations:" << endl;
    queue.push(15);
    queue.push(25);
    queue.push(35);
    queue.display();
    queue.pop();
    queue.display();

    return 0;
}
