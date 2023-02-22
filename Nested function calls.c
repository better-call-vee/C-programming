#include<stdio.h>
#include<math.h>
float f(int x, int y);
int absolute(int x);
int main ()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    float ans;
    ans = f(a, b);
    printf("The answer is: %f\n", ans);
    return 0;
}
float f(int x, int y)
{
    int tempans = absolute(x-9) + (y+4)*(y+4);  //here, we're using another function
    return sqrt(tempans);  //in this function
}
int absolute(int x)
{
    if(x>=0) return x;
    else return (-1)*x;
}
