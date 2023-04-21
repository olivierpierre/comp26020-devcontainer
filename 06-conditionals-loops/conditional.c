#include <stdio.h>

int main() {
    int x = 1234;

    if (x < 50) {
        printf("The value of x is strictly less than 50\n");
    } else if (x == 50) {
        printf("The value of x is exactly 50\n");
    } else {
        printf("The value of x is strictly more than 50\n");
    }

    return 0;
}
