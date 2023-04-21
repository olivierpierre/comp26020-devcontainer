#include <stdio.h>

int main(int argc, char **argv) {
    int value = 42;         // integer
    int *ptr1 = &value;     // pointer of integer
    int **ptr2 = &ptr1;     // pointer of pointer of integer
    int ***ptr3 = &ptr2;    // pointer of pointer of pointer of integer

    printf("ptr1: %p, *ptr1: %d\n", ptr1, *ptr1);
    printf("ptr2: %p, *ptr2: %p, **ptr2: %d\n", ptr2, *ptr2, **ptr2);
    printf("ptr3: %p, *ptr3: %p, **ptr3: %p, ***ptr3: %d\n", ptr3, *ptr3,
            **ptr3, ***ptr3);
    return 0;
}
