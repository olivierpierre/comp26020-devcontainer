#include <stdio.h>

int main() {
    char string1[6] = "hello";
    char string2[] = "hello";
    char string3[6];

    string3[0] = 'h';
    string3[1] = 'e';
    string3[2] = 'l';
    string3[3] = 'l';
    string3[4] = 'o';
    string3[5] = '\0'; // Important here

    printf("%s\n", string1);
    printf("%s\n", string2);
    printf("%s\n", string3);

    return 0;
}
