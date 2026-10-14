#include <stdio.h>

void increment(int *param) {
    (*param)++;
}

int main(int argc, char **argv) {
    int x = 20;

    printf("before call, x is %d\n", x);
    increment(&x);
    printf("after call, x is %d\n", x);

    return 0;
}
