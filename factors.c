// Finding the factors of a number
// Write a C program to find the factors of a given number. Factors of a number refer to all the numbers which divide the given number completely. Also called divisors of a number.
#include <stdio.h>
int main()
{
    int num, i;

    scanf("%d", &num);

    for (i = 1; i <= num; ++i)
    {
        if (num % i == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}