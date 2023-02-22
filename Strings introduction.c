#include<stdio.h>
int main () {

    char name[15];
    scanf("%s", name);
    printf("%s the greatest janoar\n", name);

    /// "\0" ends a string . null character
    ///string character doesn't need ampersand while taking the input
    ///while taking input if you enter any space, it will end the input there
    ///and will ignore the rest characters after the space

    char name2 [] = "Faiyaz TanvIenahin";
    name2[11] = 'e';
    name2[13] = '\0';
    printf("%s hates you\n", name2);
    printf("%c", name2[0]);


    return 0;
}


/* char name[7];
   F  A  I  Y  A  Z  \0
   0  1  2  3  4  5  6
*/
