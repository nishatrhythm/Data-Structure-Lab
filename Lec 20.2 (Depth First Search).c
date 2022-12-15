
#include <stdio.h>
#define WHITE 1
#define GRAY 2
#define BLACK 3

int adj[100][100];
int node, edge;
int color[100];

void dfsVisit(int x)
{
    color[x] = GRAY;
    for(int i=1; i<=node; i++)
    {
        if(adj[x][i] != 0)
        {
            if(color[i] == WHITE)
            {
                dfsVisit(i);
            }
        }
    }
    color[x] = BLACK;
    printf("\n %d is visited.", x);
}

void dfs()
{
    for(int i=1; i<=node; i++)
    {
        color[i] = WHITE;
    }
    for(int i=1; i<=node; i++)
    {
        if(color[i] == WHITE)
        {
            dfsVisit(i);
        }
    }
}

int main()
{
    freopen("input1.txt", "r", stdin);
    int n1, n2;
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

    dfs();
}
