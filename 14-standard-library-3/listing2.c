#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

int main(int argc, char **argv) {
    if(argc != 2) {
        printf("usage: %s <number>\n", argv[0]);
        return -1;
    }

    char *endptr;
    long n = strtol(argv[1], &endptr, 10);

    // check the validity of the string
    if(*endptr != '\0') {
        printf("invalid string!\n");
        return -1;
    }

    // check for over/underflows
    if(errno == ERANGE) {
        if(n == LONG_MIN)
            printf("underflow!\n");
        if(n == LONG_MAX)
            printf("overflow!\n");
        return -1;
    }

    printf("n is: %ld\n", n);
    return 0;
}
