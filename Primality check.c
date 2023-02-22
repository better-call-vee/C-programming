#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int m=0;
    for(int i=1; i<=n; i++) {
        if (n%i==0) m++;
    }
    if (m==2) printf("Prime");
    else printf("Composite");
    return 0;
}
