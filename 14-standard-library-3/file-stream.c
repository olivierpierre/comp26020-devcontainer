#include <stdio.h>

char *alphabet = "abcdefghijklmnopqrstuvwxyz";

int main(int argc, char **argv) {
    FILE *f1, *f2;
    char buffer[27]; // 26 letters, NULL-terminated

    /* open the file, truncate it if it exists, create it otherwise */
    f1 = fopen("test-file.txt", "w");
    if(f1 == NULL) {
        perror("fopen");
        return -1;
    }

    /* write 13 chunks of 2 bytes from alphabet into the file */
    if(fwrite(alphabet, 2, 13, f1) != 13) {
        perror("fwrite");
        return -1;
    }

    /* close the stream, re-open the file in read mode */
    fclose(f1);
    f2 = fopen("test-file.txt", "r");
    if(f2 == NULL) {
        perror("fopen");
        return -1;
    }

    /* read 26 chunks of 1 byte from the file into buffer */
    if(fread(buffer, 1, 26, f2) != 26) {
        perror("fread");
        return -1;
    }

    buffer[26] = '\0'; // fix up the string
    printf("read: %s\n", buffer);

    fclose(f2);
    return 0;
}
