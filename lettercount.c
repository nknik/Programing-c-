// Character count in given String
// Given an Input string aaaabbccdee. Count the no of same consecutive character and give the output as a4b2c2d1e2. Assume: Maximum Length of the string is 20.
// Based on the above example, write a program that accept the input string through STDIN and writes the transformed string to STDOUT.

// Other than the transformed string, no other character / string / message should be written to STDOUT.
#include <stdio.h>
#include <string.h>

int main()
{
    char s[200];
    int count = 1, i;
    scanf("%s", s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (i > 20)
        {
            printf("Invalid Input");
            return 0;
        }
    }

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
        else
        {
            printf("%c%d", s[i], count);
            count = 1;
        }
    }
    return 0;
}