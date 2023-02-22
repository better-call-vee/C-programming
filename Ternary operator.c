#include <stdio.h>
int main()
{
    int a = 10, t = 9, max;
    max = (a > t) ? a : t;
    ///here, the part before '?' is the condition. If it's true then, the output
    ///will be the left side of ':', if false then the right side of ':'.
    printf("Largest number between %d and %d is %d.\n", a, t, max);
    return 0;
}
