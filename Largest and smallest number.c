#include <stdio.h>
int main()
{
    int l, s, n;
    scanf("%d", &n);
    l=n;
    s=n;
    for (int i=1; i<=3; i++) {
        int m;
        scanf("%d", &m);
        if (m>l) l=m;
        if (m<s) s=m;
    }
    printf("Largest = %d\n", l);
    printf("Smallest = %d", s);

    return 0;
}

