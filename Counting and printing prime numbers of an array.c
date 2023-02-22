#include<stdio.h>
int main () {
    int N, i, j, k=0, p=0;
    scanf("%d", &N);
    int arr[N];
    for(i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<N; i++){
        k=0;
        for(j=1; j<=arr[i]; j++) {
            if(arr[i]%j==0) {
                k++;
            }
        }
        if(k==2) p++;
    }
    printf("%d\n", p);

    for(i=0; i<N; i++){
        k=0;
        for(j=1; j<=arr[i]; j++) {
            if(arr[i]%j==0) {
                k++;
            }
        }
    if(k==2) printf("%d ", arr[i]);
    }
    return 0;
}


//Write a C program to take one positive integer N, the size of an array as input. Then take a positive integer array
//of size N . Now count the number of prime numbers from this array and print them.
//In the sample output the first line will contain count of prime numbers and second line will contain the prime
//numbers.
//Sample Input 1: Sample Output 1:
//5                             2
//2 10 4 21 97                  2 97
//Sample Input 2: Sample Output 2:
//6                             3
//5 12 16 19 23 9               5 19 23
