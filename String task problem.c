///you have to exclude the vowels from a string and print dot before every consonant
#include<stdio.h>
int main () {
    char S[102];
    int i;
    fgets(S, sizeof(S), stdin);

    for(int i=0; i<strlen(S)-1; i++) {
        if(S[i]>='A' && S[i]<='Z') {
            S[i] += 32;
        }
        if(!(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')) {
            printf(".%c", S[i]);
        }
    }
    return 0;
}
