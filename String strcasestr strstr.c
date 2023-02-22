#include <string.h>
#include <stdio.h>

int main() {
  char string[1000];  // declare a char array to store the input string
  scanf("%s", string);  // read up to 99 characters from the input and store them in the string array

  char *target = "champions";  // declare the target word
  char *result = strcasestr(string, target);  // search for the target word in the string

  if (result != NULL) {
    printf("Yes");
  } else {
    printf("No");
  }

  return 0;
}


///strcasestr checks if a string is present in another string sequentially and
///regardless case sensitivity
