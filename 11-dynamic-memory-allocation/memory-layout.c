#include <stdio.h>
#include <stdlib.h>

int large_array[10000000];

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

    if(argc != 2) {
        printf("Usage: %s <array size>\n", argv[0]);
        return -1;
    }

    size = atoi(argv[1]);
    if(size < 500) {
        int small_array[size];
        process_array(small_array, size);
    }

    process_array(large_array, 10000000);

    return 0;
}
