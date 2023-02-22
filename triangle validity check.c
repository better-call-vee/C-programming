//Write a C program to take 3 non-negative integers as input and tell if it forms a
//valid triangle. A triangle is valid if sum of its two sides is greater than the
//third side. Print YES or NO. All sides must be valid(greater than 0)

#include<stdio.h>
int main ()
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    if(((x+y)>z) && ((x+z)>y) && ((y+z)>x)) printf("YES");
    else printf("NO");
    return 0;
}
