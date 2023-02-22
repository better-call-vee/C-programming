///I will do one task and recursion will do the rest. I won't think about how.
///Recursion is like my slave
#include<stdio.h>
void solve(int i, int n) //printing 1 to n
{
    if(i > n) return; //base case
    printf("%d\n", i); //i = 1
    //at first the function will take i=1 from the main function. then line 11 will
    //recall the function i will be 2. like this i will become 4. and after reaching
    //i=5 it will start to return.
    solve(i+1, n);
}
void solve2(int n) //printing n to 1
{
    if(n==0) return;
    printf("%d\n", n);
    solve2(n-1);
}
void solve3(int i, int n){
    if(i>n) return;
    solve3(i+1, n);  //it will be stuck at solve3(2,n). then it will go on until i
    //is equals to n. then it will return from n. and in the end 1 will be printed
    printf("%d\n", i);
}
int main ()
{
    int n;
    scanf("%d", &n);
    printf("\nPrinting from 1 to n\n");
    solve(1, n);
    printf("\nPrinting from n to 1\n");
    solve2(n);
    printf("\nPrinting reverse recurtion\n");
    solve3(1, n);
    return 0;
}
//#include<stdio.h>
//int solve(int i, int n)
//{
//    if(i>n) return 0;
//    int s=solve(i+1,n);
//    return s+i; //adding the total sum with the i everytime
//    ///if n=3, recursion is 2,3
//}
//int main ()
//{
//    int n;
//    scanf("%d", &n);
//    int s;
//    s=solve(1,n);
//    printf("%d\n", s);
//    return 0;
//}
