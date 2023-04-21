#include <stdio.h>

int main() {
    int x = -1;

    while (x > 0) { /* won't enter the loop body, condition checked before */
        printf("x is %d\n", x);
        x = x - 1;
    }

    do {
        printf("x is %d\n", x);
        x = x - 1;
    } while (x > 0); /* still does one iteration, condition checked after the loop body */

    return 0;
}
