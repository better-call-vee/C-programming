#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char sl[100];
    gets(sl);
    int len = strlen(sl);
    int arr[len];
    for(int i=0; i<len; i++) {
        arr[i]=sl[i]-96;
    }
    int sum = 0;
    for(int i=0; i<len; i++) {
        sum += arr[i];
    }
    for(int i=0; i<=sum; i++) {
        if(pow(2, i)==sum) {
            printf("YES\ncost = 2^%d", i);
            break;
        }
    }
    return 0;
}

//You are given a string S of small letters , Now calculate the cost of the string
//and tell that whether the cost of
//the string is a power of two or not.
//In this problem cost means the sum of the alphabetic order of the given string.
//Alphabetic order means
//a = 1 , b = 2 , c = 3 .......... z = 26
//And, power of two is a number of the form 2^n (2 to the power n) where n is an
//integer.
//Now ,If the cost is a power of two print YES with cost (in this format 2^n)
//otherwise print NO.
//Implement it using function.
//Sample Input 1: Sample Output 1:
//abc NO
//Sample Input 2: Sample Output 2:
//bbca YES
//cost = 2^3

