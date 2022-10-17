#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINES 100

// Helper function to find the shortest line
int shortest_line_index(int lines[], int n)
{
    int j;
    int shortest = 0;
    for (j = 1; j < n; j++) 
        if (lines[j] < lines[shortest])
            shortest = j;
    return shortest;
}

// For each "person" find the shortest line and increment the line length
void solve(int lines[], int n, int m)
{
    int i, shortest;
    for (i = 0; i < m; i++)
    {
        shortest = shortest_line_index(lines, n);
        printf("%d\n", lines[shortest]);
        lines[shortest]++;
    }
}

// The main function reads the input and calls the solve function
int main(void)
{
    int lines[MAX_LINES];
    int n, m, i;
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d", &lines[i]);
    solve(lines, n, m);
    return 0;
}