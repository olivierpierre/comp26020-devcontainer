#include <stdio.h>

int main(int argc, char **argv) {

    // prints 3.75: 4 gets converted to 4.0
    printf("%lf\n", (float)15/4);

    // prints 4: 2.5 converted to 2 (int), multiplied by 12 gives 24, divided
    // by 5 gives 4
    printf("%d\n", ((int)2.5 * 12)/5);

    // prints 4.8: 2*12 = 24, converted to 24.0, divided by 5.0 gives 4.8
    printf("%lf\n", ((int)2.5 * 12)/(double)5);
    return 0;
}

