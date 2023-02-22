#include <stdio.h>
int main()
{
    long long int x;
    int l=0;
    int sum =0;
    scanf("%lld", &x);
    while(x!=0) {
        l = x%10;
        sum+=l;
        x = x/10;
    }
    printf("%d", sum);
    return 0;
}
