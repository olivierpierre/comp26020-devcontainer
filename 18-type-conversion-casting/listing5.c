#include <stdio.h>

void f1(int i) {
    printf("%d\n", i);
}

void f2(double d) {
    printf("%lf\n", d);
}

void f3(unsigned int ui) {
    printf("%u\n", ui);
}

int main(int argc, char **argv) {
    char c = 'a';
    unsigned long long ull = 0x400000000000;

    f1(c);    // prints 97 (ascii code for 'a')
    f2(c);    // prints 97.0
    f3(ull);  // overflows int ... prints 0 (lower 32 bits of 0x400000000000)
    return 0;
}
