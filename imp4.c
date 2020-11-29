#include <stdio.h>

int main()

{

    int a = 2;

    switch (a)

    {

    case 1:
        printf("one");

    case 2:
        printf("Two");

    case 3:
        printf("Three");

    default:
        printf("Invalid Option");
    }

    return 0;
}