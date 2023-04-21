#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

    if(argc != 2) {
        printf("Usage: %s <array size>\n", argv[0]);
        return -1;
    }

    int size = atoi(argv[1]);
    int array[size]; // size only known at runtime

    for(int i=0; i<size; i++) {
        array[i] = i;
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
