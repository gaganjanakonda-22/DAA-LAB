#include <stdio.h>

#define V 5
#define INF 999

void prim(int graph[V][V])
{
    int selected[V] = {0};
    int edges = 0;
    int totalCost = 0;

    selected[0] = 1;

    printf("Edges in Minimum Spanning Tree:\n");

    while (edges < V - 1)
    {
        int min = INF;
        int x = 0, y = 0;

        for (int i = 0; i < V; i++)
        {
            if (selected[i])
            {
                for (int j = 0; j < V; j++)
                {
                    if (!selected[j] && graph[i][j] < min)
                    {
                        min = graph[i][j];
                        x = i;
                        y = j;
                    }
                }
            }
        }

        printf("%d - %d : %d\n", x, y, graph[x][y]);

        totalCost += graph[x][y];
        selected[y] = 1;
        edges++;
    }

    printf("Minimum Cost = %d\n", totalCost);
}

int main()
{
    int graph[V][V] =
    {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}
    };

    prim(graph);

    return 0;
}