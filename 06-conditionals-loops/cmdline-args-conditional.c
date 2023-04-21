#include <stdio.h>
#include <stdlib.h>

int print_help_and_exit(char **argv) {
    printf("Usage: %s <number 1> <number 2>\n", argv[0]);
    exit(-1);
}
/* Sum the two integers passed as command line integers */
int main(int argc, char **argv) {
    int a, b;
    if(argc != 3)
        print_help_and_exit(argv);
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    printf("%d + %d = %d\n", a, b, a+b);
    return 0;
}
