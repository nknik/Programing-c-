//
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("One");
        break;

    case 2:
        printf("Two");
        break;

    case 3:
        printf("Three");
        break;

    case 4:
        printf("Four");
        break;

    case 5:
        printf("Five");
        break;

    default:
        printf("Invalid");
        break;
    }
    return 0;
}