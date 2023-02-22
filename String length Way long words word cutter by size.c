#include<stdio.h>
#include<string.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<=n; i++) {
    char name[100];
    fgets(name, sizeof(name), stdin);
    int length = strlen(name)-1;
    if(length>10) {
        printf("%c%d%c", name[0], length-2, name[length-1]);
    }
    else {
        puts(name);
    }
    }
    return 0;
}


//first letter, how many characters in the midst, last letter
