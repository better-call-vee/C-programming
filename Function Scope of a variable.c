#include<stdio.h>
int g=99;   //This is a global variable
void addtwonums()
{
    int a, b;
//    int g=50;  //if I declare local & global variables with the same name, then
    //local variable will get the priority
    scanf("%d %d", &a, &b);
    int sum = a+b;
    printf("%d\n", sum);
    printf("Printing in added function %d\n", g);
    g=g+19;
    printf("Printing in added local g function %d\n", g);
    {
        extern int g;
        printf("Printing global g in added function %d\n", g);
    }
}

int main ()
{
    int chudina=7;///this is a local variable. It's scope is only in the main func.
    int g = 111; ///local variable with the same name as global variable
    addtwonums();  //so, after running the code, it's going to the added func.
    //then, at first it will take two inputs
    //then it will add and the value will be stored in sum
    //then it will print the sum(line 9)
    //then it will print the 10th line
    //in the end, it will add 19 with the value of g.
    printf("Printing in main function %d\n", g);
    return 0;
}
