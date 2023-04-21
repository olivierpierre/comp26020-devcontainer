#include <stdio.h>
#include <time.h>   // needed for time()

int main(int argc, char **argv) {
    unsigned long long t = time(NULL);

    printf("Number of seconds elapsed since the epoch (01/01/1970):\n");
    printf("%llu\n", t);
    return 0;
}
