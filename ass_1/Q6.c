#include <stdio.h>
#include<stdlib.h>

int findRank(int stream[], int n, int x) 
{
    int rank = 0;
    for (int i = 0; i < n; i++) 
    {
        if (stream[i] <= x) 
        {
            rank++;
        }
    }

    return rank;
}

int main() 
{
    int stream[] = {10, 20, 15, 3, 4, 4, 1};
    int n = sizeof(stream) / sizeof(stream[0]);
    int x = 4;

    int rank = findRank(stream, n, x);

    printf("Rank of %d is: %d\n", x, rank);

    return 0;
}
