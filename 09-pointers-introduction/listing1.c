#include <stdio.h>

int glob = 12;
char string[] = "abcd";

typedef struct {
    int member1;
    float member2;
} mystruct;

int main(int argc, char **argv) {
    mystruct ms;

    ms.member1 = 42;
    ms.member2 = 4.2;

    printf("ms member1: %d, member2: %f\n", ms.member1, ms.member2);
    return 0;
}

