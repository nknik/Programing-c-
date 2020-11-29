#include <stdio.h>
void main()
{
    char ch[10];

    gets(ch);
    // printf("%d",ch[0]);
    if (ch[0] >= 'a' && ch[0] <= 'z')
    {
        printf("%c", ch[0] - 32);
    }
    else if (ch[0] >= 'A' && ch[0] <= 'Z')
    {
        printf("%c", ch[0] + 32);
    }
}