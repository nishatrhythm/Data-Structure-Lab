#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

void tower(int, char, char, char);
int count = 0;

int main()
{
    int n;
    cout << "Enter the number of disk: ";
    cin >> n;

    cout << "The movements of disk are as below: " << endl;
    tower(n, 'A', 'B', 'C');

    cout << "Number of movements: " << count;

    getch();
}

void tower(int n, char beg, char aux, char end)
{
    if(n == 1)
    {
        count++;
        cout << "\nMove disk from peg " << beg << " --> " << end << "." << endl;
        return;
    }

    tower(n-1, beg, end, aux);
    cout << "\nMove disk from peg " << beg << " --> " << end << "." << endl;
    count++;
    tower(n-1, aux, beg, end);
}
