#include <stdio.h>

int glob = 12;
double glob2 = 4.4;

typedef struct {
    int member1;
    double member2;
} mystruct;

int main(int argc, char **argv) {
    mystruct ms = {55, 2.23};

    int *ptr1 = &glob;
    double *ptr2 = &glob2;
    mystruct *ptr3 = &ms;

    printf("ptr1 = %p, *ptr1 = %d\n", ptr1, *ptr1);
    printf("ptr2 = %p, *ptr2 = %f\n", ptr2, *ptr2);
    printf("ptr3 = %p, *(ptr3).member1 = %d, *(ptr3).member2 = %f\n",
            ptr3, (*ptr3).member1, (*ptr3).member2);
    return 0;
}

