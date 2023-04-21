#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int a = 3; int b = 5;
    int **array;

    array = malloc(a * sizeof(int *));
    if(array == NULL)
        return -1;

    for(int i=0; i<a; i++) {
        array[i] = malloc(b * sizeof(int));
        if(array[i] == NULL)
            return -1;
    }

    for(int i=0; i<a; i++)
        for(int j=0; j<b; j++) {
            array[i][j] = i*j;
            printf("array[%d][%d] = %d\n", i, j, array[i][j]);
        }

    for(int i=0; i<a; i++)
        free(array[i]);
    free(array);
    return 0;
}
