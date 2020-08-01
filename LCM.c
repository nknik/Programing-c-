
// LCM of two numbers
// Find the LCM of two numbers.
// LCM (Least Common Multiple) of two numbers is the smallest number which can be divided by both numbers. For example LCM of 15 and 20 is 60 and LCM of 5 and 7 is 35.

#include <stdio.h>
int main()
{
    int n1, n2, i, gcd, lcm;
    scanf("%d %d", &n1, &n2);
    for (i = 1; i <= n1 && i <= n2; ++i)
    {
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }
    lcm = (n1 * n2) / gcd;
    printf("%d", lcm);

    return 0;
}