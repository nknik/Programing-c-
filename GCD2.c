// GCD of 2 numbers
// Write a C program to calculate the Greatest common factor of 2 numbers
// Use using math skills to compute GCD of given 2 numbers. Input will consist of 2 lines each containing 1 number each
#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;
    scanf("%d %d", &n1, &n2);
    for(i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("%d",gcd);

    return 0;
}