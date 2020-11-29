// Fibonacci series
// Program to print the Fibonacci series up to n number of terms.
// Get the n from user and display the fibonacci series upto the n elements
#include <stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, nextTerm;
    scanf("%d", &n);

    for (i = 1; i <= n; ++i)
    {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}