#include <stdio.h>

/* A large data structure */
typedef struct {
    double a;
    double b;
    double c;
    double d;
    double e;
    double f;
} large_struct;

/* Function updating the data structure passed as _pointer_ parameter */
void f(large_struct *s) {
    (*s).a += 42.0;
    return;
}

int main(int argc, char **argv) {
    large_struct x = {1, 2, 3, 4, 5, 6};
    f(&x);
    printf("x.a: %f\n", x.a);
    return 0;
}
