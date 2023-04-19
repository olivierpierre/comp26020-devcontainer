#include <stdio.h>
#include <stdlib.h>

double *ptr1;

int main(int argc, char **argv) {
    int *ptr2;

    ptr1 = malloc(10 * sizeof(double));
    ptr2 = malloc(30 * sizeof(int));

    if(ptr1 == NULL || ptr2 == NULL) { /* ... */ }

    /* ... */

    return 0;
}
