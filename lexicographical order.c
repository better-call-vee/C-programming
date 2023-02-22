///you have to arrange the input in an alphabetical order, doesn't matter if it's
///capital or small letter

#include<stdio.h>
int main () {
    char s[102], t[102];
    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(s), stdin);

    int len = strlen(s)-1;
    for(int i=0; i<len; i++) {
        if(s[i]>='A' && s[i]<='Z') {
            s[i] += 32; //decapitalization
        }
        if(t[i]>='A' && t[i]<='Z') {
            t[i] += 32;
        }
    }
    int same = 1;
    for(int i=0; i<len; i++) {
        if(s[i]>t[i]) {
           same = 0;
           printf("1\n");
           break;
        }
        else if(s[i]<t[i]) {
            same = 0;
            printf("-1\n");
            break;
        }
    }
    if(same==1) printf("0\n");
    return 0;
}
