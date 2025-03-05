#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    char *string1 = "hello";
    char *string2 = string1;   // this is not a string copy!
    char string3[10];

    /* not super safe, what happens if string1 > string3? */
    strcpy(string3, string1);

    /* better */
    strncpy(string3, string1, 10);

    printf("string1 @%p: %s\n", string1, string1);
    printf("string2 @%p: %s\n", string2, string2);
    printf("string3 @%p: %s\n", string3, string3);

    return 0;
}
