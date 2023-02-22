#include<stdio.h>
int maxof3 (int x, int y, int z)
{
    if(x>y && x>z) return x;
    else if (y>x && y>z) return y;
    else return z;
}
int main ()
{

    int a, b, c, d, e;

    printf("Enter how many times you want the process : ");
    scanf("%d", &d);
    for(int i=0; i<d; i++)
    {
        printf("Enter the numbers : ");
        scanf("%d %d %d", &a, &b, &c);
        e = maxof3(a, b, c);
        printf("The max number is %d\n", e);
    }
    return 0;
}
