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
    //to be a scalar matrix, it has to be a diagonal matrix
    //to be an identity matrix, it has to be a scalar+diagonal matrix

    int ans = 1; //we need to decide by this flag variable
    int x = a[0][0]; //first value of the diagonal
    if(row==col) {
        for(int i=0; i<row; i++) {
            for(int j=0; j<col; j++) {
            if(i==j){
                if(a[i][j]!=x) ans = 0;
            }
            continue;
            if(a[i][j] != 0) {
                ans = 0;
            }
        }
    }
    if(ans==1) {
        printf("Scalar matrix");
    }
    else {
        printf("Not Scalar");
    }
    }
    else {
        printf("Not Scalar\n");
    }

    if(row==col) {
        for(int i=0; i<row; i++) {
            for(int j=0; j<col; j++) {
            if(i==j){
                if(a[i][j]!=1) ans = 0;
            }
            continue;
            if(a[i][j] != 0) {
                ans = 0;
            }
        }
    }
    if(ans==1) {
        printf("\nAnd Identity matrix");
    }
    else {
        printf("\nAnd Not Identical");
    }
    }
    else {
        printf("\n& Not Identical\n");
    }
    return 0;
}
