#include <stdio.h>

void print_hello(void) {
    printf("hello!\n");
    return; // we can even omit this as the function does not return anything
}

int main() {
    print_hello();
    return 0;
}

