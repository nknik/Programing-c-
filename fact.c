#include <stdio.h>
long int fact(int n);

int main()

{

    printf("%ld\n", fact(5));
}

long int fact(int n)

{

    if (n >= 1)

    {

        return n * fact(n - 1);
    }

    else

    {

        return 1;
    }
}