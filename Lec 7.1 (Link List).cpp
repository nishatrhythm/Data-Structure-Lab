/**********************************************

        DATA STRUCTURE LAB CLASS
        LECTURE: 7
        PROGRAM: 1
        LINK LIST USING C++ LANGUAGE

**********************************************/



#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;


struct Node
{
    int data;
    struct Node *next;   //Node er memory address, tai ashole eta structure er e data type

};



int main()
{
    struct Node *a=NULL;   //*a te rakhte parbo 2 ta value, 1 ta data r 1 ta next
    struct Node *b=NULL;
    struct Node *c=NULL;

    /*
    int p;
    p = (int) malloc(sizeof(int));
    */

    a = (struct Node *) malloc(sizeof(struct Node));    //a er jnno memory allocate korlam
    b = (struct Node *) malloc(sizeof(struct Node));
    c = (struct Node *) malloc(sizeof(struct Node));

    //assign

    a -> data = 10;   // -> arrow operator, data te 10 rakhlam
    a -> next = b;    // b er address ta rakhbe, ref: khata

    b -> data = 20;
    b -> next = c;

    c -> data = 30;
    c -> next = NULL;



    //print

    while(a != NULL)
    {
        cout<<a -> data<<" -> ";
        a = a -> next;
    }



    getch();

}
