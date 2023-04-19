#include <stdio.h>

int main(int argc, char **argv) {
    int si = -1;
    unsigned int ui = 1;
    printf("%d\n", si < ui); // prints 0! si converted to unsigned int
}
