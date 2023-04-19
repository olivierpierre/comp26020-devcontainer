#include <stdio.h>
#include <stdlib.h>

void print_ten_integers() {
    int *array = malloc(10 * sizeof(int));
    if(!array) {
        printf("cannot allocate memory ...\n");
        return;
    }

    for(int i=0; i<10; i++) {
        array[i] = rand()%100;
        printf("%d ", array[i]);
    }

    printf("\n");

    /* array is neve freed, leaking 10*sizeof(int) of memory each iteration */
}

int main(int argc, char **argv) {
    int iterations;

    if(argc != 2) {
        printf("usage: %s <iterations>\n", argv[0]);
        return 0;
    }

    iterations = atoi(argv[1]);

    for(int i=0; i<iterations; i++)
        print_ten_integers();

    return 0;
}
