#include<stdio.h>
int tothepower (int n, int m)
{
    if(m==0) return 1;
    return n*tothepower(n, m-1);
}
int main ()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int s = tothepower(n, m);
    printf("%d", s);
    return 0;
}
