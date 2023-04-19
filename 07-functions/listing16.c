#include <stdio.h>

int main() {
    int x = 12;
    int j;

    if(x) {
        int y = 14;

        printf("inner block, x is %d\n", x);
        printf("inner block, y is %d\n", y);
    }

    printf("outer block, x is %d\n", x);
    // printf("outer block, y is %d\n", y); // ERROR: y only visible in the if body

    for(int i=0; i<10; i++) {
        printf("In loop body, i is %d\n", i);
    }

    // ERROR -- i only visible in loop body
    // printf("Out of loop body, i is %d\n", i);

    for(j=0; j<10; j++) {
        printf("In loop body, j is %d\n", j);
    }

    // WORKING -- j declared in current block
    printf("Out of loop body, j is %d\n", j);

    return 0;
}
