// Circumference of a circle
// Write a program to find the circumference of a circle.
// The input radius must be a float variable, the output circumference should be printed as a floating point value with 2 point precision. No other extra information should be printed except the circumference value to the stdout. (Assume PI = 3.14)
#include <stdio.h>
int main()
{
    float n;
    scanf("%f", &n);
    printf("%.2f", 3.14 * (2 * n));
    return 0;
}