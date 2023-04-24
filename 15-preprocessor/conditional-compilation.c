#include <stdio.h>

#define DEBUG_MODE          // comment this to disable debug mode
#define VERBOSITY_LEVEL 4   // update this to set the verbosity level

#ifdef DEBUG_MODE
int debug_function();
#endif

int main(int argc, char **argv) {
    printf("hello, world\n");

#ifdef DEBUG_MODE
    debug_function();
#endif
    return 0;
}

#ifdef DEBUG_MODE
int debug_function() {
    printf("This is printed only if the macro DEBUG_MODE is defined\n");

#if VERBOSITY_LEVEL > 3
    printf("Additional debug because the verbosity level is high\n");
#endif /* VERBOSITY_LEVEL */

    return 42;
}
#endif /* DEBUG_MODE */
