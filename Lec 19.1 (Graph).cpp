#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int adj[100][100];

int main()
{
    freopen("input.txt", "r", stdin);

    int node, edge, n1, n2, weight;

    //cout << "Enter the number of node: ";
    cin >> node;

    //cout << "Enter the number of edge: ";
    cin >> edge;

    //cout << "Enter the starting and ending of edges: " << endl;
    for(int i=1; i<=edge; i++)
    {
        cin >> n1 >> n2 >> weight;  //[if not weighted, then remove weight input]
        //adj[n1][n2] = 1;          //[if directed]
        adj[n1][n2] = weight;       //[if weighted graph]
        //adj[n2][n1] = 1;          //[if non directed graph]
    }

    cout << endl << "Matrix" << endl;
    for(int i=1; i<=node; i++)
    {
        for(int j=1; j<=node; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    getch();
}
