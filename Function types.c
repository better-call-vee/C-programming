#include<stdio.h>

///won't send any input and expect any return.
//void warning() {
//    printf("Fire in the building! Please evacuate!\n");
//}
//void solve() {
//    int a, b;
//    scanf("%d %d", &a, &b);
//    printf("%d\n", a+b);
//}
//int main () {
//    warning();
//    warning();
//    warning();
//    int t;
//    scanf("%d", &t);
//    for(int i=0; i<t; i++) {
//        solve();
//    }
//    return 0;
//}

///won't send any input but expect return

int take_radius()
{
    int r;
    printf("Please enter the radius of a circle: ");
    scanf("%d", &r);
    return r;             ///example: getchar function
}

///will send input and will expect output

float calculate_area(int r)
{
    return 3.14159*r*r;
}

///will send input but won't return
//calculatethearea(int radius) {
//    float ans = 3.14159*r*r;
//    printf("Area of the circle is %f\n", ans);
//}

int main ()
{
    int r;
//    printf("Please enter the radius of a circle: ");
//    scanf("%d", &r);
    r = take_radius();
    float area = calculate_area(r);
    printf("Area of the circle is %f\n", area);
    return 0;
}
