/***************************************************

        DATA STRUCTURE LAB CLASS
        LECTURE: 8
        PROGRAM: 1
        LINK LIST (Advance) USING C++ LANGUAGE

***************************************************/



#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;


struct node
{
    int data;
    struct node *next;

} *head;   //global declaration for *head

//struct Node head; //ebhabew korte parbo

void create(int n);
void insert_Position();
void insertionHead(int data, int position);
void insertionExceptHead(int n, int data, int position);
void display();


int main()
{
    int n, data, position, checkPosition;
    cout<<"Enter the number of nodes in the list: ";
    cin>>n;
    create(n);
    display();

    //cout<<endl<<endl<<"The position of new Node you want to insert: ";
    //cin>>checkPosition;
    //if(checkPosition==1)
    //{
        insertionHead(data, position);
    //}
    //else
    //{
        insertionExceptHead(n, data, position);
    //}
    n=n+1;

    cout<<endl<<"After insertion: ";
    display();
    cout<<endl;

    getch();

}


//1st node head k aladabhabe assign korbo, baki guloke loop er bhitor diye dibo

void create(int n)
{
    struct node *newNode, *temp;
    int data;
    head = (struct node *) malloc(sizeof(struct node));

    cout<<endl<<"Enter the data of Node 1: ";
    cin>>data;

    head -> data = data;
    head -> next = NULL;

    temp=head;

    for(int i=2; i<=n; i++)
    {
        newNode = (struct node *) malloc(sizeof(struct node));
        cout<<"Enter the data of Node "<<i<<": ";
        cin>>data;

        newNode -> data = data;
        newNode -> next = NULL;

        temp -> next = newNode;
        temp = temp -> next;

    }

    cout<<endl<<"Single link list created."<<endl;
}


void insertionHead(int data) //head chara onno kono pos e data insert korar jnno
{
    struct node *newNode, *temp;
    newNode = (struct node *) malloc(sizeof(struct node));
    newNode -> data = data;
    newNode -> next = NULL;
    newNode -> next = head;
    head -> next = newNode;
}


void insertionExceptHead(int n, int data, int position) //head chara onno kono pos e data insert korar jnno
{
    struct node *newNode, *temp;

    cout<<endl;
    while(1)
    {
        cout<<endl<<"Enter the position to insert (2 to "<<n+1<<"): ";
        cin>>position;

        if(position>1 && position<=n+1)
        {
            break;
        }
        else
        {
            cout<<endl<<"An error has encountered. You entered a wrong position."<<endl<<"Please check the position where you want to insert a new node and try again."<<endl;
        }
    }

    cout<<"Enter the data of Node to insert: ";
    cin>>data;

    newNode = (struct node *) malloc(sizeof(struct node));
    newNode -> data = data;
    newNode -> next = NULL;

    temp=head;

    for(int i=2; i<=position-1; i++)
    {
        temp = temp -> next;

        if(temp==NULL)
        {
            break;
        }
    }

    newNode -> next = temp -> next;
    temp -> next = newNode;
    cout<<endl<<"Insertion succeeded."<<endl;
}

void display()
{
    struct node *temp;
    if(head==NULL)
    {
        cout<<"List is empty.";
    }
    else
    {
        temp=head;
        int counter=1;
        while(temp != NULL)
        {
            cout<<endl<<"Node["<<counter<<"] = "<<temp -> data;
            temp = temp -> next;
            counter++;
        }
    }
}


int searching(int key)
{
    int index = 0;
    struct node *temp;
    temp=head;

    while(temp != NULL)
    {
        if(temp -> data = key)
        {
            break;
        }
        temp = temp -> next;
        index++;
    }
    return index;
}

