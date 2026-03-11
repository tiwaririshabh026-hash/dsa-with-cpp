#include <iostream>
using namespace std;

#define size 5

int stack[size];
int top = -1;

// PUSH OPERATION
void push(int element)
{
    if (top == size - 1)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        top++;
        stack[top] = element;
        cout << element << " pushed into stack" << endl;
    }
}

// POP OPERATION
void pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        cout << "Popped element: " << stack[top] << endl;
        top--;
    }
}

// PEEK OPERATION
void peek()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Top Element: " << stack[top] << endl;
    }
}

int main()
{
    int choice, element;

    while (true)
    {
        cout << "\n1. Push\n2. Pop\n3. Peek\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter element: ";
            cin >> element;
            push(element);
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            cout << "Exiting program...";
            return 0;

        default:
            cout << "Invalid choice";
        }
    }
}