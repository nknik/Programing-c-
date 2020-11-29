#include <stdio.h>
int main()
{

    unsigned int a = -1;

    signed int b = 10;
    printf("%u\n%u", a, b);
    if (a < b)

        printf("a is small");

    else

        printf("b is small");

    return 0;
}
/*4294967295
10b is small */