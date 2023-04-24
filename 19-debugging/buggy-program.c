#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE  100

int fill_array(int *array, int size) {
    for(int i=0; i<size; i++)
        array[i] = rand()%10;
}

/* array[slot] = value */
int update_slot(int *array, int slot, int value) {
    array[slot] = value;
    printf("Updated index %d to %d\n", slot, value);
}

int process_array(int *array, int size) {
    int ii = 1000000;

    for(int i=0; i<size; i++) {
        /* If the value is even, change it to 1000000 */
        if(!(array[i] % 2)) {
            update_slot(array, ii, i); // oops, inverted 2nd and 3rd parameter!
        }
    }
}

int main(int argc, char **argv) {
    int *array = malloc(ARRAY_SIZE * sizeof(int));

    fill_array(array, ARRAY_SIZE);
    process_array(array, ARRAY_SIZE);

    free(array);
    return 0;
}
