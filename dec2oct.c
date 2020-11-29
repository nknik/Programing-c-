#include <stdio.h>
int main()
{
    // array to store octal number
    int octalNum[100], n;
    scanf("%d", &n);
    int i = 0;
    while (n != 0)
    {
        octalNum[i] = n % 8;
        n = n / 8;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", octalNum[j]);
    return 0;
}