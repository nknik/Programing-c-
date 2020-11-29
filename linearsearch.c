// Linear search
// Write a program to search an element using Linear search.
// Implements linear search (Searching algorithm) which is used to find whether a given number is present in an array and if it is present then at what location it occurs.
#include <stdio.h>
int main()
{
    int n, nk[10], p = 0, x, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nk[i]);
        // printf("%d..\n",nk[i]);
    }
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (nk[i] == x)
        {
            printf("%d", i + 1);
            return 0;
        }
    }
    printf("%d isn't present in the array.", x);
    return 0;
}