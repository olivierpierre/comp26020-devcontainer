#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    char *s1 = "hello";
    char *s2 = "hello";
    char *s3 = "not hello";

    printf("strcmp(s1, s2) returns: %d\n", strcmp(s1, s2));
    printf("strcmp(s1, s3) returns: %d\n", strcmp(s1, s3));

    printf("length of s1: %lu\n", strlen(s1));
    printf("length of s2: %lu\n", strlen(s2));
    printf("length of s3: %lu\n", strlen(s3));
    return 0;
}
