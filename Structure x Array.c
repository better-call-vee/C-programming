#include<stdio.h>

struct Student
{
    double weight; //if you write the more value taking data type at first
    //it will take less space overall
    int roll;
};

int main ()
{
    struct Student s[10];
    for(int i=0; i<10; i++)
    {
        s[i].roll=i+1;
        s[i].weight=55+i*2-10;
    }
    for(int i; i<10; i++)
    {
        printf("Student's roll: %d\nStudent's weight: %lf\n", s[i].roll, s[i].weight);
    }
    return 0;
}
