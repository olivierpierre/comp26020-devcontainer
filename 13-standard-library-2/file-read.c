#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv) {
    char buffer2[10];
    int fd2 = open("./test", O_RDONLY, 0x0);
    int bytes_read;

    if(fd2 == -1) { printf("error open\n"); return -1; }

    /* read 9 bytes */
    if(read(fd2, buffer2, 9) != 9) {
        printf("error reading\n"); close(fd2); return -1;
    }

    /* fix the string and print it */
    buffer2[10] = '\0';
    printf("read: '%s'\n", buffer2);

    /* read 9 bytes again */
    bytes_read = read(fd2, buffer2, 9);
    if(bytes_read != 9) {
        printf("error reading\n"); close(fd2); return -1;
    }

    /* fix the string and print it */
    buffer2[10] = '\0';
    printf("read: '%s'\n", buffer2);

    close(fd2);

    return 0;
}
