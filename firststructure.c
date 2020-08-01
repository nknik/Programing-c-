
#include <stdio.h>
int main()
{
    struct student
    {
        int roll_no;
        char name[30];
        int age;
        int marks;
    };
    struct student s1 = {1, "Alexa", 18, 81};
    printf("%d %s %d %d\n", s1.roll_no, s1.name, s1.age, s1.marks);
    return 0;
}