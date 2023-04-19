#include <stdio.h>
#include <unistd.h> // needed for sleep and usleep

int main(int argc, char **argv) {
    printf("hello!\n");
    printf("Sleeping for 2 seconds ...\n");

    sleep(2);

    printf("Now sleeping for .5 seconds ...\n");

    usleep(500000);

    return 0;
}
