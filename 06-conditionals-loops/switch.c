#include <stdio.h>

int main(int argc, char **argv) {
    // change the value of x to set which case we'll go through
    int x = 2;

    switch(x) {
        case 1:
            printf("x is 1\n");
            break;
        case 2:
            printf("x is 2\n");
            break;
        case 3:
            printf("x is 3\n");
            break;
        default:
            printf("x is neither 1, nor 2, nor 3\n");
    }

    return 0;
}
