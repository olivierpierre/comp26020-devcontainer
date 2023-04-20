#include <stdio.h>

int main(int argc, char **argv) {
    int a; int b; int c;
    int d = 12;  // declare and set
    int x, y = 10, z = 11;

    a = 12;      // set a to 12
    b = 20;      // set b to 20
    c = 10 + 10; // set c to 20
    a = b;       // a = 20
    d++;         // d = d + 1
    y *= 2;      // y = y * 2;

    printf("a is %d\n", a);
    printf("b is %d\n", b);
    printf("c is %d\n", c);
    printf("d is %d\n", d);
    printf("y is %d\n", y);
    printf("z is %d\n", z);

    return 0;
}
