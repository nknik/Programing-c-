// Find 2 numbers in a given array
// Write a program to find two numbers and print their index else print -1.

#include <stdio.h>
int main()
{
    int n, nk[1000], max, i, ii = -1, iii = -1, a, b;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nk[i]);
    }
    scanf("%d", &a);
    scanf("%d", &b);
    for (i = 0; i < n; i++)
    {
        if (nk[i] == a)
        {
            ii = i;
        }

        if (nk[i] == b)
        {
            iii = i;
        }
    }
    printf("Element 1 index = %d\nElement 2 index = %d", ii, iii);
    return 0;
}