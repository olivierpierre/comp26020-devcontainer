#include <stdio.h>

int add_two_integers(int a, int b) {
    int result = a + b;
    return result;
}

int main() {
    int x = 1;
    int y = 2;

    int sum = add_two_integers(x, y);

    printf("result: %d\n", sum);

    if(add_two_integers(x, y))
        printf(" (non zero)\n");
    else
        printf(" (zero)\n");

    return 0;
}

