///you will be given a 5-5 matrix of 24 zeroes and a single number 1.
///you think that a matrix looks beautiful if the 1 is located in the middle
///count the minimum number of moves needed to make the matrix beautiful

#include<stdio.h>
int main () {
    int i, j, temp, x, y;
    int arr[5][5];
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == i) {
                x = i;
                y = j;
            }
        }
    }
    int ans, row_change, col_change;
    if(x>2) row_change = (x-2);
    else row_change = (2-x);
    if(y>2) col_change = (y-2);
    else col_change = (2-y);
    ans = row_change + col_change;
    printf("%d\n", ans);
return 0;
}
//0 0 0 0 0
//0 0 0 1 0  input
//0 0 0 0 0
//0 0 0 0 0
//0 0 0 0 0
//2 output
