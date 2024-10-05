#include <stdio.h>

int glob = 12;
char string[] = "abcd";

typedef struct {
    int member1;
    float member2;
} mystruct;

int main(int argc, char **argv) {
    mystruct ms = {1, 2.0};

    printf("ms address: %p, glob address: %p, string address: %p\n", &ms, &glob, &string);
    return 0;
}
