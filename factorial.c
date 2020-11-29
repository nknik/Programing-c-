// Factorial of a number
// Write a C program to find the factorial of a given number. Factorial of a number is the multiplication of all numbers from 1 to given number

// ﻿Sample Input:

// num = 5

// Sample Output:

// 120

// Explanation:

// 1 * 2 * 3 * 4 * 5 = 120

#include <stdio.h>
int main()
{
    int n, f = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        f = f * i;
    printf("%d", f);
    return 0;
}