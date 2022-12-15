/*********************************************************

        DATA STRUCTURE LAB CLASS
        LECTURE: 3
        PROGRAM: 1
        INSERTION IN LINEAR ARRAY USING C++ LANGUAGE

**********************************************************/



/* User defined data and using while loop */

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    int a[20], n, k, item, i, j;


    //input from user
    cout<<"Enter the length of array: ";
    cin>>n;

    cout<<endl<<"Enter "<<n<<" elements of array: ";
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    cout<<endl<<"Enter the position to insert the item: ";
    cin>>k;

    cout<<endl<<"Enter the item to be inserted: ";
    cin>>item;


    //calculation
    j=n;
    while(j>=k)
    {
        a[j+1]=a[j];
        j=j-1;
    }
    a[k]=item;
    n=n+1;     //new length of the array

    //output
    cout<<endl<<"The elements of array after insertion: ";

    for(i=1; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl<<endl<<"The new length of the array is: "<<n<<endl;

    getch();

}
