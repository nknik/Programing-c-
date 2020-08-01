#include <stdio.h>
int main(int a, char *b[])
{
    int a1, a2;
    a1 = atoi(b[0]);
    printf("%d", a1);
    return 0;
}