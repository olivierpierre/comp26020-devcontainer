#include <stdio.h>

int main(int argc, char **argv) {
    int my_array[4];
    int my_2d_array[3][2];

    for(int i=0; i<4; i = i +1) {
        my_array[i] = 100 + i;
        printf("index %d contains: %d\n", i, my_array[i]);
    }

    for(int i=0; i<3; i++) {
        for(int j=0; j<2; j++) {
            my_2d_array[i][j] = i*j;
            printf("Index [%d][%d] = %d\n", i, j, my_2d_array[i][j]);
        }
    }

    return 0;
}
