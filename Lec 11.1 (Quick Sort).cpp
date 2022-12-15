#include <iostream>
#include <conio.h>
using namespace std;

/*void quickSort(int a[25], int first, int last)
{
    int i, j, pivot, temp;
    if(first < last)
    {
        pivot = first;
        i = first;
        j = last;

        while(i < j)
        {
            while(number[i] <= number[pivot] && i < last)
            {
                i++;
            }

            while(number[j] > number[pivot])
            {
                j--;
            }

            if(i < j)
            {
                temp = number[i];
                number[pivot] = number[j];
                number[j] = temp;
            }
        }
        temp = number[pivot];
        number[pivot] = number[j];
        number[j] = temp;

        quickSort(number, first, j-1);
        quickSort(number, j+1, last);
    }
}



int main()


*/




int partition(A, lb, up)
{
    pivot = a[lb];
    start = lb;
    end = ub;

    while(start < end)
    {
        while(a[start] <= pivot)
        {
            start++;
        }

        while(a[end] > pivot)
        {
            end--;
        }

        if(start < end)
        {
            swap(a[start], a[end]);
        }
    }

    swap(a[lb], a[end]);

    return end;
}

quickSort(A, lb, ub)
{
    if(lb < ub)
    {
        loc = partition(A, lb, ub);
        quickSort(A, lb, loc-1);
        quickSort(A, loc+1, ub);
    }
}

int main()
{
    int a[50], n, pivot, start, end, lb, up, loc;

    cout << "How many elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    quickSort();
    getch();
}

