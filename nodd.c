// Change the above program to print n odd numbers starting from 1.

// Sample Input - 1:

// 					3

// Sample Output - 1:

// 					1, 3, 5

// Sample Input - 2:

// 					7

// Sample Output - 2:

// 					1, 3, 5, 7, 9, 11, 13
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int count = 1;
    int temp = 1;
    while (temp <= n)
    {
        if (count % 2 == 1)
        {
            printf("%d ", count);
            temp = temp + 1;
        }
        count = count + 1;
    }
    return 0;
}
