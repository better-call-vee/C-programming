#include<stdio.h>
int main ()
{
    int N;
    scanf("%d", &N);
    int hud;

    if(N%3!=0) hud = N/3+1;
    else hud = N/3;
    int sum = 0;
    for(int i=1; i<=hud; i++)
    {
        if(i%2!=0)
        {
            for(int j=((i*3)-2); j<=i*3; j++)
            {
                sum += i;
            }
        }
        else
        {
            for(int j=((i*3)-2); j<=i*3; j++)
            {
                sum = sum - i;
            }
        }
    }
    printf("%d", sum);
    return 0;
}

