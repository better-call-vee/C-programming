#include<stdio.h>
#include<math.h>
int main () {
    int a, b, p, r;
    a = 8;
    b = 2;
    p = pow(a, b);
    r = sqrt(p);
    printf("%d to the power %d : %d", a, b, p);
    printf("\nSquareroot of %d is : %d", p, r);
    printf("\v");

    ///AREA OF A TRIANGLE
    int c, d, e;
    scanf("%d %d %d", &c, &d, &e);
    int semiperimeter = (c+d+e)/2;
    int s = semiperimeter;
    double area = sqrt(s*(s-c)*(s-d)*(s-e));
    printf("AREA = %lf", area);
}
