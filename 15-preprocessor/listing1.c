#include <stdio.h>

/* If we want to change the array size, we only need to update this */
#define ARRAY_SIZE  10

int main(int argc, char **argv) {
    int array[ARRAY_SIZE];

    for(int i=0; i<ARRAY_SIZE; i++) {
        array[i] = i;
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
