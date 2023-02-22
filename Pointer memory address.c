#include<stdio.h>
int main ()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Int tales 4 bytes(the addresses are written in hexadeci\n");
    for(int i=0; i<9; i++)
    {
        printf("%p\n", &arr[i]);
        printf("%d\n", &arr[i]); //address in decimal
    }
    printf("Long long int takes 8 bytes\n");
    long long int a, b;
    printf("%p\n%p", &a, &b);
    return 0;
}
