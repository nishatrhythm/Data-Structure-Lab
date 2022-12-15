/*********************************************************

        DATA STRUCTURE LAB CLASS
        LECTURE: 5
        PROGRAM: 1
        BINARY SEARCH USING C++ LANGUAGE

**********************************************************/



#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    int a[20], i, n, mid, beg, end, item;


    //input from user
    cout<<"Enter the length of array: ";
    cin>>n;

    cout<<endl<<"Enter a sorted array with "<<n<<" elements: ";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<endl<<"Enter the item you want to search: ";
    cin>>item;

    //initial declaration
    beg=0;
    end=n-1;
    mid=(beg+end)/2;

    //binary search condition and corresponding output
    while(beg<=end)
    {
        if(a[mid]==item)
        {
            cout<<endl<<"The position of the item is: "<<mid+1;
            break;
        }

        else if(a[mid]<item)
        {
            beg=mid+1;
        }

        else
        {
            end=mid-1;
        }

        mid=(beg+end)/2;

    }

    if(beg>end)
    {
        cout<<endl<<"Item not found in the list."<<endl;
    }

    getch();

}
