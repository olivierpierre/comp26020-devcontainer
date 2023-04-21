#include <stdio.h>

int main(int argc, char **argv) {

    printf("Number of command line arguments: %d\n", argc);

    // This is actually dangerous to do: what happens if this code is called
    // with less than 3 arguments? memory error!
    // We'll remediate this in the next lecture regarding control flow
    printf("argument 0: %s\n", argv[0]);
    printf("argument 1: %s\n", argv[1]);
    printf("argument 2: %s\n", argv[2]);

    return 0;
}
