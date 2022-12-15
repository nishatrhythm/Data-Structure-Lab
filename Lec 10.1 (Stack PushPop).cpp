#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

void push();
void pop();
void display();
int stack[50], top, i, item, n, choice;

int main()
{
    top = -1;
    cout << "Enter the size of stack (Max 50): ";
    cin >> n;
    cout << endl << "\t1. Push";
    cout << endl << "\t2. Pop";
    cout << endl << "\t3. Display";
    cout << endl << "\t4. Exit";

    while(choice != 4)
    {
        cout << endl << "Enter your choice: ";
        cin >> choice;
        switch(choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            cout << endl << "Exit point...";
            break;

        default:
            cout << "Wrong choice!";
        }
    }

    getch();
}

void push()     //data insertion
{
    if(top >= n-1)
    {
        cout << endl << "Stack overflow.";
    }

    else
    {
        cout << endl << "Enter an element to be pushed: ";
        cin >> item;
        top++;
        stack[top] = item;
    }
}

void pop()      //data deletion
{
    int temp;
    if(top <= -1)
    {
        cout << endl << "Stack is underflow.";
    }

    else
    {
        temp = stack[top];
        cout << endl << "The popped element is: " << temp;
        top--;
    }
}

void display()
{
    if(top <= -1)
    {
        cout << endl << "The list is empty.";
    }

    else
    {
        cout << "The elements in stack is: ";
        for(i=top; i>=0; i--)
        {
            cout << endl << stack[i];
        }
        cout << endl << "Enter your next choice: ";
    }
}

