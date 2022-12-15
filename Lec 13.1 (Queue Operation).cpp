#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define size 50

using namespace std;

void insert();
void del();
void display();

int queue_array[size];
int front=-1;
int rear = -1;


int main()
{
    int choice;
    while(1)
    {
        cout << "1. Insert element\n";
        cout << "2. Delete element\n";
        cout << "3. Display Queue\n";
        cout << "4. QUIT\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            insert();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default:
            cout << "Wrong input!" << endl;
        }
    }

    getch();
}


void insert()
{
    int item;

    if(rear == size-1)
    {
        cout << "Queue overflow." << endl;
    }
    else
    {
        if(front = -1)
        {
            front = 0;
            cout << "Input the item: ";
            cin >> item;
            rear = rear + 1;
            queue_array[rear] = item;

        }
    }
}


void del()
{
    if(front == -1 || front > rear)
    {
        cout << "Queue underflow." << endl;
        return;
    }
    else
    {
        cout << "Element deleted from queue is: " << queue_array[front] << endl;
        front = front + 1;
    }
}


void display()
{
    int i;
    if(front == -1 || front > rear)
    {
        cout << "Queue is empty." << endl;
    }
    else
    {
        cout << "The queue elements are: ";

        for(i = front; i <= rear; i++)
        {
            cout << queue_array[i] << " ";
        }
        cout << endl;
    }
}
