#include <stdio.h>

int main(int argc, char **argv) {
    int a = 12;
    float b = 4.5;
    char *s = "hello";
    char string[64];

    sprintf(string, "a is %d, b is %f, s is %s\n", a, b, s);
    printf("%s", string);

    return 0;
}
