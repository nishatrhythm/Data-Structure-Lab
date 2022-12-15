#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int n;
int tree[20];


int root(int key)
{
    if(tree[1] != '\0')  //jodi root value garbage na hoy tobe samne egubo.
    {
        cout << "Root is already exists." << endl;
    }
    else
    {
        tree[1] = key;
    }

    return 0;
}


int left_child(int key, int parent)
{
    if(tree[parent] == '\0')
    {
        cout << "No parent found." << endl;
    }
    else
    {
        tree[parent*2] = key;
    }

    return 0;
}


int right_child(int key, int parent)
{
    if(tree[parent] == '\0')
    {
        cout << "No parent found." << endl;
    }
    else
    {
        tree[parent*2 + 1] = key;
    }

    return 0;
}

int display(int depth)
{
    for(int i=1; i<=pow(2,depth) - 1; i++)
    {
        if(tree[i] != '\0')
        {
            cout << tree[i] << " ";
        }
        else
        {
            cout << " - ";
        }
    }

    return 0;
}


int main()
{
    int Root, left, right, depth, i, p;
    cout << "Enter the depth of tree: ";
    cin >> depth;

    n = (pow(2, depth) / 2) - 1;
    cout << "Enter the value of root: ";
    cin >> Root;

    root(Root);

    for(i=1; i<=n; i++)
    {
        cout << endl << "Is there left child of parent (1 for left) " << i << ": ";
        cin >> p;
        if(p == 1)
        {
            cout << "Enter left child: ";
            cin >> left;
            left_child(left, i);
        }

        cout << endl << "Is there left child of parent (2 for left) " << i << ": ";
        cin >> p;
        if(p == 2)
        {
            cout << "Enter right child: ";
            cin >> right;
            right_child(right, i);
        }
    }

    display(depth);

    getch();
}

