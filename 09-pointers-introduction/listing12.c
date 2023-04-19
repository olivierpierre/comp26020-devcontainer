#include <stdio.h>

int main(int argc, char **argv) {
    int value = 42;
    int *ptr1 = &value;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;

    printf("ptr1: %p, *ptr1: %d\n", ptr1, *ptr1);
    printf("ptr2: %p, *ptr2: %p, **ptr2: %d\n", ptr2, *ptr2, **ptr2);
    printf("ptr3: %p, *ptr3: %p, **ptr3: %p, ***ptr3: %d\n", ptr3, *ptr3,
            **ptr3, ***ptr3);
    return 0;
}
