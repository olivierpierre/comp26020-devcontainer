#include <stdio.h>

int main() {
    int i;

    for(i = 0; i<10; i = i + 1) {
        printf("i is %d\n", i);
    }

    /* we can declare the iterator as part of the loop header */
    for(int j=0; j<10; j = j + 1) {
        printf("j is %d\n", j);
    }

    return 0;
}
