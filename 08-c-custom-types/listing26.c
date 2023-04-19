#include <stdio.h>

// 'my_int' is now equivalent to 'long long unsigned int'
typedef long long unsigned int my_int;

int main(int argc, char **argv) {
    my_int x = 12;

    printf("x is: %llu\n", x);

    return 0;
}
