//you will be given a certain amount of chocolates. For every 4 chocolate packet,
//you will get 1 chocolate for free.So, in the end, how many chocolates you will get

#include<stdio.h>
int main ()
{
    int n;
    printf("Number of chocolates you will get: ");
    scanf("%d", &n);
    int choc = n;
    int pack = n;

    while (pack>=4)
    {
        choc +=(pack/4);
        pack = (pack/4)+(pack%4);
    }
    printf("Eventually, you will have -->%d<-- chocolates", choc);
    return 0;
}
