// Write a C code to print all odd numbers from 1 to n.

// Sample Input:

// 			5

// Sample Output:

// 			1 3 5

// Let us recap the steps to make it simple to move on.

// Step 1: Generate the key idea

// Step 2: Write the pseudocode

// Step 3: Try the C code
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int count = 1;
    while (count <= n)
    {
        if (count % 2 == 1)
        {
            printf("%d ", count);
        }
        count = count + 1;
    }
    return 0;
}