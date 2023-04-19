#include <stdio.h>

void my_function(int parameter) {
    parameter = 12; // does not update x in main
}

int main() {
    int x = 10;

    my_function(x);
    printf("x is %d\n", x);

    return 0;
}
