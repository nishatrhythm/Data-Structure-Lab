/*********************************************************

        DATA STRUCTURE LAB CLASS
        LECTURE: 4
        PROGRAM: 1
        BUBBLE SORT USING C++ LANGUAGE

**********************************************************/



/* Ascending sort */

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

    //bubble sort condition
    for(k=1; k<n; k++)
    {
        for(j=1; j<=n-k; j++)
        {
            if(a[j]>a[j+1])
            {
                item=a[j];
                a[j]=a[j+1];
                a[j+1]=item;
            }
        }
    }

    //output
    cout<<endl<<"The elements of array after bubble sort (ascending): ";

    for(i=1; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }

    getch();

}




/* Descending sort */

/*#include<iostream>
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

    //bubble sort condition
    for(k=1; k<n; k++)
    {
        for(j=1; j<=n-k; j++)
        {
            if(a[j]<a[j+1])
            {
                item=a[j];
                a[j]=a[j+1];
                a[j+1]=item;
            }
        }
    }

    //output
    cout<<endl<<"The elements of array after bubble sort (descending): ";

    for(i=1; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }

    getch();

}*/
