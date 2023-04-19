#include <stdio.h>

int main(int argc, char **argv) {
    int int_array[2] = {1, 2};
    double double_array[2] = {4.2, 2.4};
    char char_array[] = "ab";

    printf("int_array[0]      = %d\n", int_array[0]);
    printf("int_array[1]      = %d\n", int_array[1]);
    printf("*(int_array+0)    = %d\n", *(int_array+0));
    printf("*(int_array+1)    = %d\n", *(int_array+1));

    printf("double_array[0]   = %f\n", double_array[0]);
    printf("double_array[1]   = %f\n", double_array[1]);
    printf("*(double_array+0) = %f\n", *(double_array+0));
    printf("*(double_array+1) = %f\n", *(double_array+1));

    printf("char_array[0]     = %c\n", char_array[0]);
    printf("char_array[1]     = %c\n", char_array[1]);
    printf("*(char_array+0)   = %c\n", *(char_array+0));
    printf("*(char_array+1)   = %c\n", *(char_array+1));

    return 0;
}
