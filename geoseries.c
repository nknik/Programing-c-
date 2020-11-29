// Geometric Series
// Consider the following series: 1,1,2,3,4,9,8,27,16,81,32,243,64,729,128,2187… Write a program to find the Nth term in the series.
// This series is a mixture of 2 series - all the odd terms in this series form a geometric series and all the even terms form yet another geometric series.

// The value N in a positive integer that should be read from STDIN. The Nth term that is calculated by the program should be written to STDOUT. Other than value of nth term, no other character / string or message should be written to STDOUT.
#include <stdio.h>
#include <math.h>

int three(int n)
{
    int nk;
    nk = pow(3, n - 1);
    printf("%d", nk);
}

int two(int n)
{
    int nk;
    nk = pow(2, n - 1);
    printf("%d", nk);
}

int main()
{
    int n;
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        three(n / 2);
    }
    else
    {
        two(n / 2 + 1);
    }
    return 0;
}