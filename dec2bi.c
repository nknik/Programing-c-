#include <stdio.h>
int main()
{
    int binaryNum[32];
    int i = 0, n;
    scanf("%d", &n);
    while (n > 0)
    {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
    return 0;
}