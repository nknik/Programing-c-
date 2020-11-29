// Printing I am a C developer
// Write a C code to print the sentence "I am a C developer" for 'n' number of times.

// Sample Input:

// n = 2

// Sample Output:

// I am a C developer

// I am a C developer
#include <stdio.h>
int main()
{
    int n, c = 1;
    scanf("%d", &n);
    while (c <= n)
        printf("I am a C developer\n", c++);

    return 0;
}