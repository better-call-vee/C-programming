#include<stdio.h>

int myfriend() {
    printf("Pera Nai! Chill!\n");
    return 69;
}
int mydodo(int x) {      //(int x) = agreement
    printf("Mama double koro\n");
    return 2*x;
}
int mysum(int x, int y) {
    printf("Adding two numbers...\n");
    return x+y;
}
int main () {
    int a;
    a = myfriend();
    int b, c, d, e, f;
    b = myfriend();
    c = myfriend();
    d = mydodo(18);
    e = mydodo(9);
    f = mydodo(6);
    printf("%d\n%d\n%d\n%d\n%d\n%d\n", a, b, c, d, e, f);
    int g, h;
    g = mysum(63, 6); // 63, 6 = parameter
    printf("%d\n", g);
    h = mysum(0, 9);
    printf("%d\n", h);
    return 0;
}
