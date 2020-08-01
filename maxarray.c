// Maximum element in an array
// Write a program to find the maximum element in an array.
// Sample Input:

// 5

// 1 3 2 5 4

// Sample Output:

// 5
#include <stdio.h>
int main()
{
    int n, nk[1000], max, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nk[i]);
    }
    max = nk[0];
    for (i = 0; i < n; i++)
    {
        if (nk[i] > max)
        {
            max = nk[i];
        }
    }
    printf(" %d ", max);
    return 0;
}