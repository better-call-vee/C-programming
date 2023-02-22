#include <stdio.h>
int main()
{
    int t, a, gcd;
    scanf("%d %d", &t, &a);
    for(int i=1; i<=t && i<=a; i++) {
        if(t%i==0 && a%i==0) gcd=i;
    }
    printf("The GCD of %d and %d is %d", t, a, gcd);
    return 0;
}
