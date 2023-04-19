#include <stdio.h>
#include <stdlib.h>

/* Sum the two integers passed as command line integers */
int main(int argc, char *argv[]) {
    int a, b;

    // Once again, dangerous!
    // We'll fix that in the next lecture regarding control flow
    a = atoi(argv[1]);
    b = atoi(argv[2]);

    printf("%d + %d = %d\n", a, b, a+b);

    return 0;
}
