#include<stdio.h>
#include<string.h>

int main ()
{
    int N;
    scanf("%d ", &N);
    char S[200];
    scanf("%s", S);
    int plus=0, minus=0, pl=0, mn=0;
    int len = strlen(S);
    for (int i=0; i<len; i++)
    {
        pl = 0;
        if(S[i]=='+')
        {
            while(S[i]=='+')
            {
                pl++;
                i++;
            }
        }
        if (pl>plus) plus = pl;
    }
    for (int i=0; i<len; i++) {
        mn = 0;
        if (S[i]=='-')
        {
            while(S[i]=='-')
            {
                mn++;
                i++;
            }
        }
        if(mn>minus) minus = mn;
    }
    if(plus>minus) printf("%d", plus);
    else if (minus>plus) printf("%d", minus);
    else printf("%d", minus);
    return 0;
}

//Problem Statement
//
//Harry and Larry are now bored playing with numbers.
//Now they want to play with plus and minus signs.
//This time they don’t want to give signs one by one.
//Anyone can give any number of signs at a time but at most N signs.
//Can you tell the maximum of all signs that they gave sequentially?
//
//For example:
//
//If the input is 7 + + - + - - - , then the answer is 3 as 3 minus signs are given sequentially and it is the maximum.
//If the input is 7 + + + + + - - , then the answer is 5.
//Input Format
//
//First line will contain a positive integer N
//Second line will contain N signs (+ or -)
//Constraints
//
//0 < N <= 100
//Output Format
//
//Output a single integer, the maximum of all signs that came sequentially.
//Sample Input 0
//
//7
//++++---
//Sample Output 0
//
//4
