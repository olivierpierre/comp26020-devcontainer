#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int buffer_size = 10;

    char *ptr1  = malloc(buffer_size);
    char *ptr2 = malloc(buffer_size);

    if(ptr1 && ptr2) {
        memset(ptr1, 0x40, buffer_size);  // 0x40 is ascii code for @
        memcpy(ptr2, ptr1, buffer_size);

        for(int i=0; i<buffer_size; i++) {
            printf("ptr1[%d] = %c\n", i, ptr1[i]);
            printf("ptr2[%d] = %c\n", i, ptr2[i]);
        }
    }

    return 0;
}
