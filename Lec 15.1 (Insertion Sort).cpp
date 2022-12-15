#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i, j, n, temp, a[20];
    cout << "Enter the length of array: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(i=1; i<n; i++)
    {
        temp = a[i];
        j = i-1;
        while(temp < a[j] && j >= 0)
        {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = temp;
    }

    cout << "The sorted array is: ";
    for(i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }

    getch();
}
