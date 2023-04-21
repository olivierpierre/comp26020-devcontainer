/* When compiling a program using math.h, use -lm on the command line:
 * gcc program.c -o program -lm
 */
#include <stdio.h>
#include <math.h>   // needed for math functions

int main(int argc, char **argv) {
    printf("ceil 2.5:  %f\n", ceil(2.5));
    printf("floor 2.5: %f\n", floor(2.5));
    printf("2^5:       %f\n", pow(2, 5));
    printf("sqrt(4):   %f\n", sqrt(4));
    return 0;
}
