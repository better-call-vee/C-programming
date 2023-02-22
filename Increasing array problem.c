//You have to modify the array so that it is increasing. every element should be
//as large as the previous element. On each move, you may increase the value of
//any element by one. what is the minimum number of moves required?
#include<stdio.h>
int main () {
    int n, i, arr[200003];
    scanf("%d", &n);
    int moves = 0;
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i=1; i<n; i++) {
        if(arr[i]<arr[i-1]) {
            moves += (arr[i-1] - arr[i]); //gist lines
            arr[i] = arr[i-1];            //
        }
    }
    printf("%d\n", moves);
    return 0;
}
