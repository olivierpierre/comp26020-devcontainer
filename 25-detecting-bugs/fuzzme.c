#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char name[32];  // Vulnerable buffer (too small for unchecked input)

    if (argc < 2) {
        fprintf(stderr, "Usage: %s <input file>\n", argv[0]);
        return 1;
    }

    FILE *f = fopen(argv[1], "r");
    if (!f) {
        perror("fopen");
        return 1;
    }

    // VULNERABILITY: No length check on fgets input!
    fread(name, 1, 512, f);  // Reads up to 512 bytes into a 32-byte buffer!
    fclose(f);

    printf("hello %s\n", name);

    return 0;
}