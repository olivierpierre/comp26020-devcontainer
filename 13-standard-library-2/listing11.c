#include <stdio.h>
#include <sys/types.h>  // needed for open
#include <sys/stat.h>   // needed for open
#include <fcntl.h>      // needed for open
#include <unistd.h>     // needed for read and write
#include <string.h>

int main(int argc, char **argv) {
    int fd1;
    char *file_path = "./test";
    char *buffer = "hello, world";

    fd1 = open(file_path, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
    if(fd1 == -1) {
        printf("error with open\n");
        return -1;
    }

    /* write 'hello, world!' in the file */
    if(write(fd1, buffer, strlen(buffer)) != strlen(buffer)) {
        printf("issue writing\n");
        close(fd1); return -1;
    }

    /* write it again */
    if(write(fd1, buffer, strlen(buffer)) != strlen(buffer)) {
        printf("issue writing\n");
        close(fd1); return -1;
    }

    close(fd1);

    return 0;
}
