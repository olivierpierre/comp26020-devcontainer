#include <stdio.h>

typedef enum {
    CHAR,
    INT,
    DOUBLE
} type_enum;

void print(void *data, type_enum t) {
    switch(t) {
        case CHAR:
            printf("character: %c\n", *(char *)data);
            break;
        case INT:
            printf("integer: %d\n", *(int *)data);
            break;
        case DOUBLE:
            printf("double: %lf\n", *(double *)data);
            break;
        default:
            printf("Unknown type ...\n");
    }
}

int main(int argc, char **argv) {
    char c = 'x';
    int i = 42;
    double d = 11.5;

    print((void *)&c, CHAR);
    print((void *)&i, INT);
    print((void *)&d, DOUBLE);
    return 0;
}
