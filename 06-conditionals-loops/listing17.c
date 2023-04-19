#include <stdio.h>

int main() {

    for(int i = 0; i < 10; i = i +1) {
        printf("iteration %d\n", i);

        if(i == 5) {
            break;
        }
    }

    return 0;
}
