#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>  // needed for errno and perror

int main(int argc, char **argv) {
    int fd = open("a/file/that/does/not/exist", O_RDONLY, 0x0);

    /* Open always returns -1 on failure, but it can be due to many different
     * reasons */
    if(fd == -1) {
        printf("open failed! errno is: %d\n", errno);

        /* errno is an integer code corresponding to a given reason. To format
         * it in a textual way use perror: */
        perror("open");
    }

    return 0;
}
