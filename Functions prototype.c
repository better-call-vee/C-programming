#include<stdio.h>
float maxof3 (float x, float y, float z);  ///introducing the function first by declaring
int main ()     ///double maxof3 would be wrong. double is not a prototype
{

    float a, b, c, d, e;

    printf("Enter how many times you want the process : ");
    scanf("%d", &d);
    for(int i=0; i<d; i++)
    {
        printf("Enter the numbers : ");
        scanf("%f %f %f", &a, &b, &c);
        e = maxof3(a, b, c);
        printf("The max number is %f\n", e);
    }
    return 0;
}

float maxof3 (float x, float y, float z)
{
    if(x>y && x>z) return x;
    else if (y>x && y>z) return y;
    else return z;
}
///then in the end, the function is written.
///it's more granted
