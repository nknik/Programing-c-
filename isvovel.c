#include <stdio.h>
int main()
{
    char c;
    int lowercase, uppercase;
    scanf("%c", &c);

    lowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    uppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (lowercase || uppercase)
        printf("Vowel", c);
    else
        printf("Consonant", c);
    return 0;
}