

union test {
    int marks;
    char name;
};
int main()
{
    union test s1;
    printf("%d", sizeof(s1));
    return 0;
}