//#include<stdio.h>
////factorial(n) = n x factorial(n-1)
////factorial(0) = 1
//int factorial(int n) {
//    if(n>1)
//        return n*factorial(n-1);
//    else
//        return 1;
//}
//int main () {
//    int n;
//    scanf("%d", &n);
//    printf("%d\n", factorial(n));
//    return 0;
//}

//
//#include<stdio.h>
//void fun(int n)
//{
//    if(n>0)
//    {
//        fun(n/2);
//        printf("%d ",n);
//    }
//}
//int main()
//{
//    int x=8;
//    fun(x);
//    return 0;
//}

//#include<stdio.h>
//void funoti(int n) {
//    if(n>0) {
//        printf("%d ", n);
//        funoti(n-1);
//    }
//}
//int main () {
//    int n;
//    scanf("%d", &n);
//    funoti(n);
//    return 0;
//}

#include<stdio.h>

int calsum(int n)
{
    if(n!=0) return n+calsum(n-1);
    else return n;
}


int main ()
{
    int n;
    scanf("%d", &n);
    printf("%d", calsum(n));
    return 0;
}


///When a function calls itself that time we call this process function recursion
///In recursive function , base case or recursive function termination condition is
///mandatory.
