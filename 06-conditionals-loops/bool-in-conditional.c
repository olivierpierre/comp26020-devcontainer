#include <stdio.h>

int main() {
    int one = 1;
    int zero = 0;

    printf("shoud print ok: ");
    if (one) { printf("ok\n"); }

    if (zero) { printf("should not be printed\n"); }

    if (!one) { printf("should not be printed\n"); }

    printf("shoud print ok: ");
    if (one || zero) { printf("ok\n"); }

    if (one && zero) { printf("should not be printed\n"); }

    if ((one && zero || one && zero)) { printf("should not be printed\n"); }

    printf("shoud print ok: ");
    if (one && (one || zero)) { printf("ok\n"); }

    return 0;
}
