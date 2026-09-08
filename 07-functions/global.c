#include <stdio.h>

int global_var;

void add_to_global_var(int value) {
    global_var = global_var + value;
}

int main() {
    global_var = 100;
    add_to_global_var(50);
    printf("global_var is %d\n", global_var);
    return 0;
}
