//You are given an array of N positive integers. Find the maximum even value from the array.
//For finding the maximum even value from the array you can perform only one of the following operations-
//
//Choose any even value from the array.
//Choose any two(must be different) values from the array and perform summation on those two values.
//If it(summation of those two values) will even you can pick those two values.
//It is guaranteed that all the integers are distinct and at least one operation will exist in the given input.
//
//Input Format
//
//The first line contains a single positive integer N.
//The second line will contain N positive integers A1,A2,A3,A4…..An
//Constraints
//
//1 <= N <= 10
//1 <= A[i] <= 20 where (0 <= i < n)
//Output Format
//
//Print a single positive integer, the maximum even value.
//Sample Input 0
//
//5
//2 4 6 8 10
//Sample Output 0
//
//18
//Explanation 0
//
//In this case, we can choose 8 and 10, the summation is 18 which is the maximum even.
//Sample Input 1
//
//5
//2 9 4 1 3
//Sample Output 1
//
//12
//Explanation 1
//
//In this case we can choose 9 and 3, the summation is 12, which is the maximum even here.
//
//
//
//



#include<stdio.h>
int main()
{
        for(int i=0; i<100; i++) {
        int N;
        scanf("%d ", &N);
        int A[20];
        for(int i=0; i<N; i++)
        {
            scanf("%d", &A[i]);
        }
        int even=0, even1=0, odd=0, odd1=0;
        for(int i=0; i<N; i++){
            if(A[i]%2==0 && A[i]>even) {
                even = A[i];
            }
            if(A[i]%2!=0 && A[i]>odd) {
                odd = A[i];
            }
        }
        for(int i=0; i<N; i++) {
            if(((A[i]%2==0) && (A[i]>even1)) && (A[i]<even)) {
                even1 = A[i];
            }
            if(((A[i]%2!=0) && (A[i]>odd1)) && (A[i]<odd)) {
                odd1 = A[i];
            }
        }
        printf("\n%d %d %d %d\n", even, even1, odd, odd1);
        int BE = even+even1;
        int BO = odd+odd1;
        int ans = 0;
        int max[3];
        max[0] = BE;
        max[1] = BO;
        max[2] = even;

        for(int i=0; i<3; i++) {
            printf("%d ", max[i]);
        }

        for(int i=0; i<3; i++) {
            if((max[i]>ans) && (max[i]%2==0)) ans=max[i];
        }

        printf("\n%d\n", ans);
        }
    return 0;
}

