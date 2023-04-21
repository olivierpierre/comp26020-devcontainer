#include <stdio.h>

void negate_int_array(int *ptr, int size) {
    for(int i=0; i<size; i++)
        ptr[i] = -ptr[i];
}

int main(int argc, char **argv) {
    int array[] = {1, 2, 3, 4, 5, 6, 7};

    negate_int_array(array, 7);
    for(int i=0; i<7; i++)
        printf("array[%d] = %d\n", i, array[i]);

    return 0;
}
