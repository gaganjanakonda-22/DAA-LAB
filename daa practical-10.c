#include <stdio.h>

#define MAX 100

struct Edge {
    int u, v, weight;
};

int parent[MAX];

// Find the parent of a vertex
int find(int x)
{
    if (parent[x] == x)
        return x;

    return find(parent[x]);
}

// Union two sets
void unionSets(int a, int b)
{
    int rootA = find(a);
    int rootB = find(b);

    parent[rootA] = rootB;
}

// Sort edges by weight
void sortEdges(struct Edge edges[], int e)
{
    int i, j;
    struct Edge temp;

    for (i = 0; i < e - 1; i++)
    {
        for (j = 0; j < e - i - 1; j++)
        {
            if (edges[j].weight > edges[j + 1].weight)
            {
                temp = edges[j];
                edges[j] = edges[j + 1];
                edges[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n, e;
    int i, count = 0, totalCost = 0;

    struct Edge edges[MAX];

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &e);

    printf("Enter edges (source destination weight):\n");

    for (i = 0; i < e; i++)
    {
        scanf("%d %d %d",
              &edges[i].u,
              &edges[i].v,
              &edges[i].weight);
    }

    // Initialize parent
    for (i = 0; i < n; i++)
        parent[i] = i;

    // Sort edges by weight
    sortEdges(edges, e);

    printf("\nEdges in Minimum Spanning Tree:\n");

    // Kruskal's algorithm
    for (i = 0; i < e && count < n - 1; i++)
    {
        int u = edges[i].u;
        int v = edges[i].v;

        if (find(u) != find(v))
        {
            printf("%d -- %d  Weight = %d\n",
                   u, v, edges[i].weight);

            totalCost += edges[i].weight;
            unionSets(u, v);
            count++;
        }
    }

    printf("\nMinimum Cost = %d\n", totalCost);

    return 0;
}