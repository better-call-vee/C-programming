#include<stdio.h>
#include<string.h>
struct Student
{
    int roll;  ///struct member
    char name[50];
    int age;
    float weight;  ///by structure, we can create our own data type
};

int main ()
{
    int a;
    struct Student s = {12, "Faiyaz Tanvee", 24, 75.6};
    struct Student s2;
    s2.roll = 12;  ///using dot to access them
    s2.age = 24;
    s2.weight = 75.6;
    char st2[]= "Tanvin Abir";
    strcpy(s2.name, st2); //we can't directly asign string value in structure

    printf("name = %s\nroll = %d\nage = %d\nweight = %f\n", s.name, s.roll, s.age, s.weight);
    printf("name = %s\nroll = %d\nage = %d\nweight = %f", s2.name, s2.roll, s2.age, s2.weight);
    return 0;
}
