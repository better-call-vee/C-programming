#include<stdio.h>
#include<string.h>
int main () {
    char str[1000005];
    scanf("%s", str);

    int n= strlen(str), freq[27];
    for(int i=1; i<=26; i++) {
        freq[i] = 0;
    }
    for(int i=0; i<n; i++) {
        freq[(str[i]-'A')+1]++;
    }
//    for(int i=1; i<=26; i++) {
//        printf("%d->%d\n", i, freq[i]);
//    }
    int oddValue=-1, totalCharcount=0, odd=0;
    char oddChar;
    for(int i=1;i<=26;i++) {

        if(freq[i]>=1) totalCharcount++;

        if(freq[i]%2!=0) {
            oddValue=freq[i];
            oddChar=i+64;
            freq[i]=0;
            odd++;
        }
    }

    if(odd>1) {
        printf("NO SOLUTION\n");
        return 0;
    }

//  printf("%d \n", oddValue);
    printf("KING -> %c \n", oddChar);
    printf("Total character: %d\n", totalCharcount);
    int i=0, remainingChar=n;

    if(oddValue!=-1) {
        totalCharcount-=1;
        remainingChar-=oddValue;
    }
    int l=0, r=(remainingChar/2-1);
    char first[remainingChar/2], last[remainingChar/2];
    while(i!=totalCharcount) {
        int evenValue=-1;
        char evenChar;
        for(int i=1; i<=26; i++) {
            if(freq[i]>1) {
                evenValue=freq[i];
                evenChar=i+64;
                freq[i]=0;
                break;
            }
        }
//        printf("%c ", evenChar);
//        printf("%d\n", evenValue);
        int ii=0, jj=0;
        while(ii!=(evenValue/2)) {
            first[l] = evenChar;
            l++;
            ii++;
        }
        while(jj!=(evenValue/2)) {
            last[r] = evenChar;
            r--;                  //palindrome, p[6]= abccba. so here
            jj++;      //a= p[0], a=p[5];
        }

        i++;
    }
    printf("The palindrome will be: ");
    for(int i=0; i<(remainingChar/2); i++) {
        printf("%c", first[i]);
    }
    if(oddValue!=-1) {
        for(int i=1; i<=oddValue; i++) {
            printf("%c", oddChar);
        }
    }
    for(int i=0; i<(remainingChar/2); i++) {
        printf("%c", last[i]);
    }
return 0;
}
