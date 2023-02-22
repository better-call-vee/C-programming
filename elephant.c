#include<stdio.h>
int main () {
    int x;
    scanf("%d", &x);
//    if(x%5==0) {
//        printf("%d", x/5);
//    }
//    else {
//        printf("%d", x/5+1);
//    }
    s = (n/5) + (n%5 != 0); //here if (n%5!=0) is false, the statement will be a value of 0(bullean). so
    printf("%d\n", s);   //when the the (n%5!=0) is true, the statement will be a value of 1. only then the
    return 0; //elephant will move one step more
}

//An elephant decided to visit his friend. It turned out that the elephant's house is located at point 0 and his friend's house is located at point x(x > 0) of the coordinate line. In one step the elephant can move 1, 2, 3, 4 or 5 positions forward. Determine, what is the minimum number of steps he need to make in order to get to his friend's house.
//
//Input
//The first line of the input contains an integer x (1≤x≤1000000) — The coordinate of the friend's house.
//
//Output
//Print the minimum number of steps that elephant needs to make to get from point 0 to point x.
//
//Examples
//input
//5
//output
//1
//input
//12
//output
//3
