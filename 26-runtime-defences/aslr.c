#include <stdio.h>
#include <stdlib.h>

int global1 = 42;
int global2 = 43;

int main() {
    int local1 = 24;
    int local2 = 25;

    int *heap_ptr1 = malloc(sizeof(int));
    int *heap_ptr2 = malloc(sizeof(int));

    printf("address 1 in data segment: %p\n", &global1);
    printf("address 2 in data segment: %p\n", &global2);
    printf("address 1 on the stack: %p\n", &local1);
    printf("address 2 on the stack: %p\n", &local2);
    printf("address 1 on the heap: %p\n", heap_ptr1);
    printf("address 2 on the heap: %p\n", heap_ptr2);

    free(heap_ptr1);
    free(heap_ptr2);
}