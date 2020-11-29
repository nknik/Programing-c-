// Leap year
// Write a program to check whether the given year is leap year or not.
// If leap year print "Leap year" else print "Not Leap year".
//nk nik
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if ((n % 100 == 0 && n % 400 == 0) || n % 4 == 0)
        printf("LEAP YEAR");
    else
        printf("NOT LEAP YEAR");
    return 0;
}