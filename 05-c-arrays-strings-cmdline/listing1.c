#include <stdio.h>

int array[] = {1, 2, 3, 4, 5};
int array_2d[][2] = {{1, 2}, {3, 4}, {5, 6}};

int main() {
    printf("array[4] = %d\n", array[4]);
    printf("array_2d[2][0] = %d\n", array_2d[2][0]);
    return 0;
}
