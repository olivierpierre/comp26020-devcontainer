#include <stdio.h>

int glob = 12;

typedef struct {
    int member1;
    float member2;
} mystruct;

int main(int argc, char **argv) {
    mystruct ms = {1, 2.0};

    printf("ms address is: %p, glob address is %p\n", &ms, &glob);
    return 0;
}

