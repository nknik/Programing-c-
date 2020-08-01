// The calculator should work based on the input from user. We will get two numbers from the user. We will also get a choice for the operation to be performed as 1 or 2 or 3 or 4 for Addition, Subtraction, Multiplication or Division.

// i.e. If the user enters

// 1 -  Add the two numbers

// 2 - Subtract the two numbers

// 3 - Multiply the two numbers

// 4 - Divide the two numbers

#include <stdio.h>
int main()
{
    int n1, n2, option;
    scanf("%d %d %d", &n1, &n2, &option);

    switch (option)
    {
    case 1:
        int sum = n1 + n2;
        printf("%d", sum);
        break;
    case 2:
        int difference = n1 - n2;
        printf("%d", difference);
        break;
    case 3:
        int product = n1 * n2;
        printf("%d", product);
        break;
    case 4:
        if (n2 == 0)
            printf("Cannot divide by 0");
        else
        {
            int quotient = n1 / n2;
            printf(quotient);
        }
        break;
    default:
        printf("Please enter numbers from 1 to 4");
    }
}