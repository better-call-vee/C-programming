#include<stdio.h>
#include<string.h>
int main () {

    char name1[] = " Faiyaz Tanvee";
    char name2[] = "Muhammad Faiyaz Tanvee";
    char name3[] = "Muhammad Saad";
    char name4[] = "muhammad FaIyaz TanvEE";
    char name5[] = "Nahin";
    char name6[] = "Apon";
    printf("Length of the string is %d\n", strlen(name1));
    printf("Shorter number between the length ans and the number is %d\n", strnlen(name1, 25));
    printf("%d\n", strcmp(name1, name2));///1/positive=name1 is bigger lexicographically,
    ///-1/negative=name1 is smaller, 0=both are same
    ///capital letters' ASCII value is smaller than small letters'

    printf("%d\n", strncmp(name2, name3, 5)); ///comparing 5 letters
    printf("%d\n", strcasecmp(name2, name4)); ///will compare capital-smaller regardlessly

    ///STRING CONCATENATION
    printf("name3's length before: %d\n");
    strcat(name3, name1);
    puts(name3);
    printf("After: %d\n", strlen(name3));

    strncat(name3, name1, 7);
    printf("Adding specific number of letters: ");
    puts(name3);

    ///STRING COPY
    strcpy(name1, name5);
    puts(name1); ///replace the string

    strncpy(name1, name6, 4);
//    name1[4] = '\0'; //try commenting out this line once
    puts(name1);

    char name7[] = "You can't see me yeah";
    printf("%s\n", strchr(name7, 'a')); ///from first a
    printf("%s\n", strrchr(name7, 'a')); ///from last a

    printf("%s\n", strstr(name7, "see")); ///finding string in string


return 0;
}
