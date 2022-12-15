#include <stdio.h>
int adj[100][100];

int main()
{
    freopen("input1.txt", "r", stdin);
    int node, edge, n1, n2;
    scanf("%d", &node);
    scanf("%d", &edge);
    for(int i=1; i<=edge; i++)
    {
        scanf("%d%d", &n1, &n2);
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }

    for(int i=1; i<=node; i++)
    {
        for(int j=1; j<=node; j++)
        {
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }

    for(int i=1; i<=node; i++)
    {
        if(adj[1][i] != 0)
        {
            printf("%d ", i);
        }
    }

    return 0;

}
