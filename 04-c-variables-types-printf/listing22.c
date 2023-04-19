#include <stdio.h>

int main() {

    int int_var = -1;
    unsigned int uint_var = 12;
    long int lint_var = 10;
    float float_var = 2.5;
    double double_var = 2.5;
    char char_var = 'a';
    char string_var[] = "hello";

    printf("Integer: %d\n", int_var);
    printf("Unsigned integer: %u\n", uint_var);
    printf("Long integer: %ld\n", lint_var);
    printf("Float: %f\n", float_var);
    printf("Double: %lf\n", double_var);
    printf("Characters: %c\n", char_var);
    printf("String: %s\n", string_var);

    printf("Several variables: %d, %lf, %s\n", int_var, double_var,
            string_var);

    return 0;
}
