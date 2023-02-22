#include<stdio.h>
int main ()
{
    long long int n;
    printf("Enter a number: ");
    scanf("%lld", &n);  //big numbers will take more bits. Integer can't store that
    while(n>1)
    {
        printf("-->%lld\n", n);
        if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            n=3*n+1;
        }
    }
    printf("===>%lld\n", n);
return 0;
}
