#include<stdio.h>
#include<math.h>
int main () {
    int a, b, c, d;
    a = ((8>7) + (9<=9))*2; //true+true= 2*2
    b = ((9/2==4) && (8%2==3));//both statements need to be true
    c = ((9/3==3) && (8%2==0));
    d = ((4/2==3) || (15/3==5)); //if one statement is true, then it's true
    printf("%d\t%d\t%d\t%d", a, b, c, d);
}
