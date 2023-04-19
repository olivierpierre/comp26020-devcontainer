#include <stdio.h>

int main() {
    int i = 0;

    while(i < 10) {
        i = i + 1;

        if(i == 5) {
            continue;
        }

        printf("iteration %d\n", i);
    }

    return 0;
}
