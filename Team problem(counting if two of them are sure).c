#include<stdio.h>
int main () {
    int n, i, a, j, counter;
    scanf("%d", &n);
    int solved = 0;
    for(i=0; i<n; i++) {
        counter = 0;
        for(j=0; j<3; j++) {
            scanf("%d", &a);
            counter += a;
        }
        if(counter>=2) solved++;
    }
    printf("%d\n", solved);
    return 0;
}

//three best friends will solve some problems, then they will decide what will
//be the answering by voting. If two of them agreeing, then only it will be counted
//as a solved problem. Agreeing means 1 and disagreeing means 0. The inputs
//will be either 1 or 0.
