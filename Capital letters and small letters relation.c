#include<stdio.h>
int main () {
    char name[100];
    fgets(name, sizeof(name), stdin);
    for(int i=0; name[i]!='\0'; i++) {
        if(name[i]>='a' && name[i]<='z'){ //unless it will change all the character by 32 ASCII
        name[i] -= 32; //there is 32 difference between capital and
        }              //small letter ascii value
    }
    puts(name);
    char cha;
    scanf("%c", &cha);
    printf("ASCII value of '%c' is %d", cha, cha);
    return 0;
}
