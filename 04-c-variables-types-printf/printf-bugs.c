#include <stdio.h>

int main() {
    int my_variable = -42;
    printf("-42 printed with %%d: %d\n", my_variable);
    printf("-42 printed with %%u: %u\n", my_variable);  // -42 interpreted as an unsigned integer

    unsigned long long int ull = 5467513055454315;
    printf("5467513055454315 printed with %%llu: %llu\n", ull);
    printf("5467513055454315 printed with %%u: %u\n", ull);      // interprets only 4 bytes vs. 8 for llu
    printf("5467513055454315 printed with %%d: %d\n", ull);      // first 4 bytes, interpreted as unsigned

    return 0;
}
