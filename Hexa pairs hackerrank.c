#include<stdio.h>

int findthegcd (int n, int m)
{
    int gcd;
    for(int i=1; i<=n && i<=m; i++)
    {
        if(n%i==0 && m%i==0) gcd=i;
    }
    if(gcd==1) return 1;
    return 0; //hackerrank compiler doesn't get this sometimes
}

int main ()
{
    int T;
    scanf("%d", &T);
    for(int i=0; i<T; i++)
    {
        int N;
        scanf("%d", &N);
        int arr[N];
        for(int i=0; i<N; i++)
        {
            scanf("%d", &arr[i]);
        }
        int count=0;
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<N; j++)
            {
                if(i!=j)
                {
                    if(findthegcd(arr[i], arr[j])==1) count++;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
