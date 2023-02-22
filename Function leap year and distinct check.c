#include<stdio.h>
int is_leap(int y) {
    if((y%400==0) || (y%100!=0 && y%4==0)) return 1;
    else return 0;
}
int is_distinct(int n) {
    int ld;
    int count_digit[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    while(n>0) {
        ld=n%10;
        count_digit[ld]++;
        n/=10;
    }
    for(int i=0; i<10; i++) {
        if(count_digit[i]>1) return 0;
    }
    return 1;
}
int main () {
    int year;
    scanf("%d", &year);
    if(is_leap(year)==1 && is_distinct(year)==1) {
        printf("The year is beautifully leap year\n");
    }
    else printf("EWWW\n");
    return 0;
}
