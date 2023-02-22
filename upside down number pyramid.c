#include<stdio.h>
int main ()
{
    int N;
    scanf("%d", &N);

    for(int i=N; i>=1; i--)
    {
        for(int j=0; j<N-i; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

