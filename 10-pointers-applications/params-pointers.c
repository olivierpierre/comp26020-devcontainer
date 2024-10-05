#include <stdio.h>

int multiply_and_divide(int n1, int n2, int *product, int *division) {

    /* Can't divide if n2 is 0 */
    if(n2 == 0)
        return -1;

    *product = n1 * n2;
    *division = n1 / n2;

    return 0;
}

int main(int argc, char **argv) {
    int a = 10, b = 5;
    int product, division;

    if(multiply_and_divide(a, b, &product, &division) == 0) {
        printf("10*5 = %d\n", product);
        printf("10/5 = %d\n", division);
    } else
        printf("ERROR: division by zero!\n");

    return 0;
}
