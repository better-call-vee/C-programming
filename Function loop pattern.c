#include<stdio.h>
void patthash(int n)
{
    for(int i=0; i<n; i++)
    {
        printf("#");
    }
    printf("\n");
}
int main ()
{
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        patthash(i);
    }
    return 0;
}
