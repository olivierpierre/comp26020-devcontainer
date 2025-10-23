#include <stdio.h>
#include <string.h>

int main() {
    char string1[] = "hello, world";
    char string2[32] = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";

    strncpy(string2, string1, strlen(string1));
    printf("%s\n", string2); // prints "hello, worldxxxxxxxxxxxxxxxxxxx"
}