#include <stdio.h>

void increment(int param) {
    param++;
}

int main(int argc, char **argv) {
    int x = 20;

    printf("before call, x is %d\n", x);   // print 20
    increment(x);
    printf("after call, x is %d\n", x);    // print 20

    return 0;
}

