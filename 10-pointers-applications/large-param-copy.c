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

/* Function updating the data structure passed as parameter */
large_struct f(large_struct s) {
    s.a += 42.0;
    return s;
}

int main(int argc, char **argv) {
    large_struct x = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
    printf("large_struct size: %lu\n", sizeof(large_struct));

    large_struct y = f(x);

    printf("y.a: %f\n", y.a);
    return 0;
}
