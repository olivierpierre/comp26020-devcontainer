#include <stdio.h>

int main(int argc, char **argv) {
    int i = -1000;
    unsigned int ui = 4294967295;
    printf("%d\n", i + ui);

    //      i:   11111111111111111111110000011000 (A)
    //     ui:   11111111111111111111111111111111 (B)
    // i + ui:  111111111111111111111110000010111 (C)
    //  final:   11111111111111111111110000010111 (D)

    // (A) originally 2's complement promoted to unsigned
    // (B) standard unsigned representation, max number an unsigned int can store
    // (C) addition result
    // (D) result gets converted to int (expected by %d), truncate MSB to get 32 bits
    // Solution: use %ld rather than %d to store the result on 64 bits

    return 0;
}
