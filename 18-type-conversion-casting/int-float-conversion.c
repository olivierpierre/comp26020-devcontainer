#include <stdio.h>

int main(int argc, char **argv) {
    //prints 7:  25/10 rounds to 2; 2 * 15 = 30; 30/4 rounds to 7
    printf("%d\n", 25 / 10 * 15 / 4);

    // prints 7.5: 25/10 rounds to 2; 2*15 = 30; 30 gets converted to
    // 30.0 (double) and divided by 4.0 (double) giving result 7.5 (double)
    printf("%lf\n", 25 / 10 * 15 / 4.0);

    // printis 9.375: 25.0 / 10.0 (converted from 10) is 2.5, multiplied by 15.0
    // (converted from 15) gives 37.5, divided by 4.0 (converted from 4) gives
    // 9.375
    printf("%lf\n", 25.0 / 10 * 15 / 4);

    // prints garbage, don't try to interpret a double as an int!
    printf("%d\n", 25.0 / 10 * 15 / 4);

    return 0;
}
