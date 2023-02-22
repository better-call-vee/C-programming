#include<stdio.h>
int main () {
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col]; //always declare array after taking size inputs
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    //to be a diagonal matrix, it has to be a square matrix
    int ans = 1; //we need to decide by this flag variable
    if(row==col) {
        for(int i=0; i<row; i++) {
            for(int j=0; j<col; j++) { ///going to each an every index and checking
            if(i==j){    /// i=j means it's okay
                continue;  ///continue means it will ignore the next if steps, but when it's not i=j,
            }    ///that means it's the other indexes and not the diagonals, then we need to check if they are 0 or not
            if(a[i][j] != 0) {
                ans = 0;
            }
        }
    }
    if(ans==1) {
        printf("Diagonal matrix");
    }
    else {
        printf("Not diagonal");
    }
    }
    else {
        printf("Not diagonal\n");
    }

    return 0;
}

//examples of diagonal matrix
/*
    7 0 0
    0 9 0
    0 0 8

    6 0 0 0
    0 8 0 0
    0 0 7 0
    0 0 0 9
*/
