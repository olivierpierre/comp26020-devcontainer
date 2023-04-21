#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    for(int i=0; i<10; i++)
        printf("%d ", rand()%100);
    printf("\n");

    return 0;
}
