#include <stdio.h>

int main(int argc, char **argv) {
    int v = 42;
    int *ptr = &v;

    printf("value pointed by ptr:   %d\n", *ptr);    // 42
    printf("v's value:              %d\n", v);       // 42

    *ptr = 0;

    printf("value pointed by ptr:   %d\n", *ptr);    // 0
    printf("v's value:              %d\n", v);       // 0
}
