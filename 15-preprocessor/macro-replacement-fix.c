#include <stdio.h>
#include <stdlib.h>

#define SIZE_1  10
#define SIZE_2  10
#define TOTAL   (SIZE_1 + SIZE_2)

int main(int argc, char **argv) {
    printf("total twice = %d\n",
            TOTAL * 2);
    return 0;
}
