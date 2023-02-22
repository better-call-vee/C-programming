#include<stdio.h>
int main () {
    int a=7;
    double b;
    char c='a';

    b = (double) 25/4;

    //here, (double) is called type casting
    //if we don't use this here, b will print only 6 because we are calculating
    //division of two int.that's why we need type casting
    printf("%d %lf %c\n", a, b, c);

    int e=9;
    double d=8.65;
    int *pi;
    double *pd;
    pi = &e;
//    pd = &d;
//    pd = pi; this will give a warning. because you're trying to allocate
//an ing(4bytes) pointer in a double(8bytes) pointer.SO,

    pd = (double*)pi; ///it won't show you a warning
    printf("%d %lf\n", e, d);
    printf("%p %p\n", pi, pd);

    return 0;
}
