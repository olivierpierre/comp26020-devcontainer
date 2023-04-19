/* listing2.c, illustrate the use of comments */

#include <stdio.h> // necessary to get access to printf

/* this function simply prints out 'hello world' and returns */
int main() {

    printf("hello, world!\n"); // here we print ...
    /* the line below will not be compiled: */
    // printf("goodbye!\n");
    return 0;                  /* ... and return */
}

