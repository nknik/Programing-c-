#include <stdio.h>

#include <string.h>

#include <stdlib.h>

void myfunc(char **param)

{

    ++param;
}

int main()

{

    char *str = (char *)malloc(64);

    strcpy(str, "hello nk world");

    myfunc(&str);

    myfunc(&str);

    printf("%s\n", str);

    return 0;
}
