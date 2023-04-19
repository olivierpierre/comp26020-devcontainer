#include <stdio.h>
#include <stdlib.h> // needed for malloc

int process_array(int *array, int size) {
    for(int i=0; i<size; i++) {
        array[i] = i;

        /* Only print 1 every 10 elements */
        if(!(i%10))
            printf("array[%d] = %d\n", i, array[i]);
    }

}

int main(int argc, char **argv) {
    int size;
    int *heap_array;

    if(argc != 2) {
        printf("Usage: %s <array size>\n", argv[0]);
        return -1;
    }

    size = atoi(argv[1]);

    heap_array = malloc(size * sizeof(int));

    process_array(heap_array, size);

    free(heap_array);

    return 0;
}
