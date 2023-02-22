#include<stdio.h>

struct Student
{
    int age; //it will kill more memory. will take 24 bytes instead of 16
    double weight; //but if the double were on top , it will take 16 bytes space
    //for the structure
    int roll;
};

int main ()
{
    struct Student s = {.roll = 12, .weight = 85.2, .age = 21};
    struct Student s2 = {.roll = 13, .weight = 82.2, .age = 23};

    struct Student *sp;
    sp = &s;
    printf("Size of structure: %d\n", sizeof(struct Student));
    printf("%p\n%p\n", sp, &s2); //their difference will be 16
    printf("%d %lf %d\n", sp->roll, sp->weight, sp->age);
    return 0;
}
