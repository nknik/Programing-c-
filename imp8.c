#include <stdio.h>

int main()

{

    int i = 0.7;

    static float m = 0.7;

    if (m == i)

    {

        printf("Hello");
    }

    else if (m > i)

    {

        printf("Hi");
    }

    else

    {

        printf("HelloHi");
    }

    return 0;
}