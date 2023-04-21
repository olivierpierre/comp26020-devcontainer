#include <stdio.h>

void add_one(int param) {
    param++;
}

int main(int argc, char **argv) {
    int x = 20;

    printf("before call, x is %d\n", x);   // print 20
    add_one(x);
    printf("after call, x is %d\n", x);    // print 20

    return 0;
}

