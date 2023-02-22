#include<stdio.h>
//int main () {
//    int i, j;
//    i=0;
//    while (i<3)
//    {
//      j=0;                     ///WHILE LOOP
//      while (j<5)
//      {
//          printf("*");
//          j++;
//      }
//      printf("\n");
//      i++;
//    }
//   return 0;
//}


///FOR LOOP
    int main () {
    int i, j;
    for(i=1; i<=5; i++) {
        for(j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");
    for(i=1; i<=5; i++) {
        for(j=1; j<=9; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");
    int m=5;
    for(i=1; i<=5; i++) {
        for(int s=1; s<=m; s++) {
            printf(" ");
        }
        for (j=1; j<=i*2-1; j++) {
            printf("*");
        }
        m--;
        printf("\n");
    }
    return 0;
}
