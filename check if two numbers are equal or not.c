//Write a C program to accept two integers and check whether they are equal or not.

#include<stdio.h>
int main ()
{
    int x, y;
    printf("Please enter two numbers: ");
    scanf("%d%d", &x, &y);

    if (x-y==0) printf("Number1 and Number2 are equal");
    else printf("They are not equal");
    return 0;

}
