/*********************************************************

        DATA STRUCTURE LAB CLASS
        LECTURE: 2
        PROGRAM: 2
        LINEAR SEARCH PROGRAM USING C++ LANGUAGE

**********************************************************/



/* Predefined data and using for loop */

/*#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    int data[10]= {2, 5, 3, 7, 9, 0, 8, 1, 4, 6};
    int loc=-1, k, item;

    cout<<"Enter the item to search: ";
    cin>>item;

    for(k=0; k<10; k++)
    {
        if(item==data[k])
        {
            loc=k;
            break;
        }
    }

    if(loc==-1)
    {
        cout<<endl<<"Item not found."<<endl;
    }

    else

    {
        cout<<endl<<"Item found and location is "<<loc+1<<"."<<endl;
    }

    getch();

}*/



/* User defined data and using for loop */

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    int n;
    cout<<"Enter the length of array: ";
    cin>>n;

    int data[n], loc=-1, k, item, i;
    cout<<endl<<"Enter "<<n<<" elements: ";
    for(i=0; i<n; i++)
    {
        cin>>data[i];
    }

    cout<<endl<<"Enter the item to search: ";
    cin>>item;

    for(k=0; k<10; k++)
    {
        if(item==data[k])
        {
            loc=k;
            break;
        }
    }

    if(loc==-1)
    {
        cout<<endl<<"Item not found."<<endl;
    }
    else
    {
        cout<<endl<<"Item found and location is "<<loc+1<<"."<<endl;
    }

    getch();

}



/* User defined data and using while loop */

/*#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    int n;
    cout<<"Enter the length of array: ";
    cin>>n;

    int data[n], loc=-1, k=0, item, i;
    cout<<endl<<"Enter "<<n<<" elements: ";
    for(i=0; i<n; i++)
    {
        cin>>data[i];
    }

    cout<<endl<<"Enter the item to search: ";
    cin>>item;

    while(loc==-1 && k<n)
    {
        if(item==data[k])
        {
            loc=k;
        }
        k++;
    }

    if(loc==-1)
    {
        cout<<endl<<"Item not found."<<endl;
    }

    else
    {
        cout<<endl<<"Item found and location is "<<loc+1<<".";
    }

    getch();

}*/
