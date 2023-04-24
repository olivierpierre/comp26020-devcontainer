#include <stdio.h>

int main(int argc, char **argv) {
    char char_var = 12;   // 1 byte, -128 -to 127
    int int_var = 1000;   // 4 bytes, -2*10^9 to 2*10^9
    long long ll_var = 0x840A1231AC154; // 8 bytes, -9*10^18 to 9*10^18

    // here, char_var is first promoted to int, then the result of the first
    // addition is promoted to long long
    long long result = (char_var + int_var) + ll_var;
    printf("%lld\n", result);
    return 0;
}
