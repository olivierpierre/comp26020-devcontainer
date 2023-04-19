#include <stdio.h>

int main() {
    int my_2d_array[3][2];

    my_2d_array[0][0] = 0;
    my_2d_array[0][1] = 1;
    my_2d_array[1][0] = 2;
    my_2d_array[1][1] = 3;
    my_2d_array[2][0] = 4;
    my_2d_array[2][1] = 5;

    printf("my_2d_array[%d][%d] = %d\n", 0, 0, my_2d_array[0][0]);
    printf("my_2d_array[%d][%d] = %d\n", 0, 1, my_2d_array[0][1]);
    printf("my_2d_array[%d][%d] = %d\n", 1, 0, my_2d_array[1][0]);
    printf("my_2d_array[%d][%d] = %d\n", 1, 1, my_2d_array[1][1]);
    printf("my_2d_array[%d][%d] = %d\n", 2, 0, my_2d_array[2][0]);
    printf("my_2d_array[%d][%d] = %d\n", 2, 1, my_2d_array[2][1]);

    return 0;
}
