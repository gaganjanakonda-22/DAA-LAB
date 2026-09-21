#include <stdio.h>

#define MAX 10

int graph[MAX][MAX];
int visited[MAX];
int n;

/* DFS Function */
void DFS(int vertex)
{
    int i;

    printf("%d ", vertex);
    visited[vertex] = 1;

    for (i = 0; i < n; i++)
    {
        if (graph[vertex][i] == 1 && visited[i] == 0)
        {
            DFS(i);
        }
    }
}

/* BFS Function */
void BFS(int start)
{
    int queue[MAX];
    int front = 0, rear = 0;
    int i;

    for (i = 0; i < n; i++)
        visited[i] = 0;

    queue[rear++] = start;
    visited[start] = 1;

    while (front < rear)
    {
        int vertex = queue[front++];

        printf("%d ", vertex);

        for (i = 0; i < n; i++)
        {
            if (graph[vertex][i] == 1 && visited[i] == 0)
            {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
}

int main()
{
    int i, j;
    int start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);

    /* DFS */
    for (i = 0; i < n; i++)
        visited[i] = 0;

    printf("\nDFS Traversal: ");
    DFS(start);

    /* BFS */
    printf("\nBFS Traversal: ");
    BFS(start);

    return 0;
}