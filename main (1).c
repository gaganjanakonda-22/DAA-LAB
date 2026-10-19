#include <stdio.h>

#define MAX 10
#define INF 999999

int n, cost[MAX][MAX];
int visited[MAX];
int minCost = INF;

void tsp(int city, int count, int totalCost)
{
    int i;

    if (count == n && cost[city][0] != 0)
    {
        int finalCost = totalCost + cost[city][0];

        if (finalCost < minCost)
            minCost = finalCost;

        return;
    }

    for (i = 0; i < n; i++)
    {
        if (!visited[i] && cost[city][i] != 0)
        {
            visited[i] = 1;
            tsp(i, count + 1, totalCost + cost[city][i]);
            visited[i] = 0;
        }
    }
}

int main()
{
    int i, j;

    printf("Enter number of cities: ");
    scanf("%d", &n);

    if (n < 2 || n > MAX)
    {
        printf("Number of cities must be between 2 and %d.\n", MAX);
        return 1;
    }

    printf("Enter cost matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &cost[i][j]);
        }
    }

    visited[0] = 1;
    tsp(0, 1, 0);

    if (minCost == INF)
        printf("No complete tour exists.\n");
    else
        printf("Minimum tour cost = %d\n", minCost);

    return 0;
}