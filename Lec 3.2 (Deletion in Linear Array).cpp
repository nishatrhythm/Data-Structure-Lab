/*********************************************************

        DATA STRUCTURE LAB CLASS
        LECTURE: 3
        PROGRAM: 2
        DELETION IN LINEAR ARRAY USING C++ LANGUAGE

**********************************************************/



/* User defined data and using for loop */

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

    cout<<endl<<"Enter the position to delete the item: ";
    cin>>k;


    //calculation
    item=a[k];
    for(j=k; j<=n-1; j++)
    {
        a[j]=a[j+1];
    }
    n=n-1;     //new length of the array


    //output
    cout<<endl<<"The elements of array after deletion: ";

    for(i=1; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl<<endl<<"The new length of the array is: "<<n<<endl;

    getch();

}
