#include <stdio.h>

int main(int argc, char *argv[]) {
    int int1 = 2, int2 = 4;
    float float1 = 2.8;

    float float_res = int1 + float1;
    float float_res2 = int1 * (float1 + int2);
    int int_res = int1 + float1;

    printf("float result:   %f\n", float_res);
    printf("float result2:   %f\n", float_res2);
    printf("integer result: %d\n", int_res);

    return 0;
}
