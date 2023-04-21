#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if(argc != 2) {
        printf("usage: %s <number>\n", argv[0]);
        return -1;
    }

    int n = atoi(argv[1]);
    printf("n is: %d\n", n);
    return 0;
}
