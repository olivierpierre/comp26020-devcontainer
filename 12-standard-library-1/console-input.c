#include <stdio.h>

int main(int argc, char **argv) {
    int int1, int2;
    double double1;
    float float1;
    char s[128];

    printf("Please input a string:\n");
    fgets(s, 128, stdin);

    printf("Please input an integer:\n");
    scanf("%d", &int1);

    printf("Please input a float:\n");
    scanf("%lf", &double1); /* make sure to us %lf for double and %f for float */

    printf("Please enter an integer and a float separated by a space\n");
    scanf("%d %f", &int2, &float1);

    printf("You have entered: %d, %d, %lf, %f, and %s\n", int1, int2, double1,
            float1, s);
    return 0;
}
