#include <stdio.h>

int main(int argc, char **argv) {
    int variable = 42;
    int *pointer = &variable;

    printf("Pointer value is %p, pointed value is %d\n", pointer, *pointer);
    return 0;
}
