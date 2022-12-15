#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define INFINITY 99999

int node, edge, w;
int adj[MAX][MAX];

void shortest(int adj[MAX][MAX], int edge, int start)
{
    int cost[MAX][MAX], distance[MAX], visited[MAX], predecessor[MAX];
    int i, j, count, mindist, nextnode;
    for(i=1; i<=edge; i++)
    {
        for(j=1; j<=edge; j++)
        {
            if(adj[i][j] == 0)
            {
                cost[i][j] = INFINITY;
            }
            else
            {
                cost[i][j] = adj[i][j];
            }
        }
    }

    for(i=1; i<=edge; i++)
    {
        distance[i] = cost[start][i];
        predecessor[i] = start;
        visited[i] = 0;
    }
    distance[start] = 0;
    visited[start] = 1;
    count = 1;

    while(count < edge - 1)
    {
        mindist = INFINITY;
        for(i=1; i<=edge; i++)
        {
            if(distance[i] < mindist && !visited[i])
            {
                mindist = distance[i];
                nextnode = i;
            }
        }
        visited[nextnode] = 1;
        for(i=1; i<=edge; i++)
        {
            if(!visited[i])
            {
                if(distance[i] > (mindist + cost[nextnode][i]))
                {
                    distance[i] = mindist + cost[nextnode][i];
                    predecessor[i] = nextnode;
                }
            }
        }
        count++;
    }

    for(i=1; i<=node; i++)
    {
        if(i != start)
        {
            printf("\nDistance from %d to %d: %d ", start, i, distance[i]);
        }
    }
}


int main()
{
    int start, n1, n2;
    freopen("input2.txt", "r", stdin);
    scanf("%d", &node);
    scanf("%d", &edge);

    for(int i=1; i<=edge; i++)
    {
        scanf("%d%d%d", &n1, &n2, &w);
        adj[n1][n2] = w;
        adj[n2][n1] = w;
    }

    for(int i=1; i<=node; i++)
    {
        for(int j=1; j<=node; j++)
        {
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }

    printf("Enter the starting node: ");
    scanf("%d", &start);
    shortest(adj, edge, start);

    return 0;

}
