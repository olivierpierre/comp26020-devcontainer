#include <stdio.h>

int main() {
    int x = 10;

    printf("------ while loop:\n");
    while (x > 0) {
        printf("x is %d\n", x);
        x = x - 1;
    }

    x = 10;
    printf("------ do ... while loop:\n");
    do {
        printf("x is %d\n", x);
        x = x - 1;
    } while (x > 0);

    return 0;
}
