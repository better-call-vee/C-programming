#include<stdio.h>
int main ()
{
    int a=12345;
    int *p;
    p=&a; //value printing with pointers.
    printf("%p\n", p);
    printf("%d\n", *p); //value printing with pointers.
    int arr[3] = {5, 6, 7};
    printf("%p\n", arr); //first index
    printf("%d\n", *(arr+1)); //value of that position by pointer
    printf("%p\n", arr+2);
    int titi = 9;
    int *tan;
    int *on;
    tan=&titi; //tan pointer getting titi's address
    on=tan; //tan pointer equals on pointer
    *on=69; //on pointer's value gets changed
    printf("%d\n", titi); //so as titi's value gets changed
    return 0;
}
