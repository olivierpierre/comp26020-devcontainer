#include <stdio.h>

void add_one(int *param) {
    (*param)++;
}

int main(int argc, char **argv) {
    int x = 20;

    printf("before call, x is %d\n", x);
    add_one(&x);
    printf("after call, x is %d\n", x);

    return 0;
}
