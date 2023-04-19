#include <stdio.h>

int main() {
    int array[4];

    array[0] = 10;
    array[1] = 20;
    array[2] = 30;
    array[3] = 40;

    printf("array[%d] contains %d\n", 0, array[0]);
    printf("array[%d] contains %d\n", 1, array[1]);
    printf("array[%d] contains %d\n", 2, array[2]);
    printf("array[%d] contains %d\n", 3, array[3]);

    return 0;
}
