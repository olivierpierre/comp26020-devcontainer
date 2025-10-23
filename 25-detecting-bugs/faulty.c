#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int c;

int main() {

    int a = INT_MAX;
    int b = 1;
    c = a + b; // Integer overflow!

    char buffer[8];
    char str[] = "this string is too long";
    strcpy(buffer, str); // Buffer overflow!


    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 42;
    free(ptr);
    *ptr = 99; // Use-after-free!

    return 0;
}