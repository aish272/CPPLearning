#include <iostream>
using namespace std;
class Stack
{
    int *a;
    int max;
    int top;

public:
    Stack(int size)
    {
        max = size;
        top = -1;
        a = new int[size];
    }

    void push(int data)
    {
        if (top >= (max - 1))
            cout << "stack is full." << endl;
        else
            a[++top] = data;
        cout << data << " pushed." << endl;
    }
    int pop(void)
    {
        if (top == -1)
        {
            cout << "Stack is empty";
            return 0;
        }
        else
        {
            int x = a[top--];
            return x;
        }
    }

    int peek(void)
    {
        if (top == -1)
        {
            cout << "Stack is empty";
            return 0;
        }
        else
        {
            int x = a[top];
            return x;
        }
    }

    bool isEmpty()
    {
        if (top = -1)
        {
            return true;
        }

        else
        {
            return false;
        }
    }

    bool isFull()
    {
        if (top >= (max - 1))
        {
            return true;
        }

        else
        {
            return false;
        }
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty." << endl;
        }
        else
        {
            for (int i = 0; i <= top; i++)
            {
                cout << "Element number " << i + 1 << " is " << a[i] << endl;
            }
        }
    }
};
int main(void)
{
    Stack s1(8);
    cout << s1.isEmpty() << endl;

    cout << s1.isFull() << endl;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    cout << "Element on top is "<<s1.peek() << endl;

    cout << "Popped outelement is " << s1.pop() << endl;
    s1.display();

    return 0;
}