#include <stdio.h>
#include <sys/time.h> // needed for gettimeofday

int main(int argc, char **argv) {
    struct timeval tv, start, stop, elapsed;

    gettimeofday(&tv, NULL);
    printf("Seconds since the epoch: %lu.%06lu\n", tv.tv_sec, tv.tv_usec);

    gettimeofday(&start, NULL);
    for(int i=0; i<1000000000; i++);
    gettimeofday(&stop, NULL);

    timersub(&stop, &start, &elapsed);

    printf("Busy loop took %lu.%06lu seconds\n", elapsed.tv_sec,
            elapsed.tv_usec);

    return 0;
}
