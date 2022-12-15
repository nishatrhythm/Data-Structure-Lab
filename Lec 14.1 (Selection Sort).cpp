#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a[25], n, i, j, temp;

    cout << "How many elements in array: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }

    //logic of selection sort
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "The sorted array is: ";
    for(i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }

    getch();
}

