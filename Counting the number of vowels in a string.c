#include<stdio.h>
int main () {
    char sen[1000];
    //scanf("%d", sen); scanf can't take space as input, after getting space
    //it will search for another input
    fgets(sen, sizeof(sen), stdin); // best method to enter string characters
    //gets(sen); you can input space here, enter will end the input

    int i=0, counter=0;
    while(sen[i]!='\0') {
        if(sen[i]=='a' || sen[i]=='A') counter++;
        else if(sen[i]=='e' || sen[i]=='E') counter++;
        else if(sen[i]=='i' || sen[i]=='I') counter++;
        else if(sen[i]=='o' || sen[i]=='O') counter++;
        else if(sen[i]=='u' || sen[i]=='U') counter++;
        i++;
    }
    printf("Number of Vowels = %d", counter);
}
