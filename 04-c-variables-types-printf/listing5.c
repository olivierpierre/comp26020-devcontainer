#include <stdio.h>

int main() {
    int so_short = sizeof(short int);
    int so_int = sizeof(int);
    int so_uint = sizeof(unsigned int);
    int so_long = sizeof(long int);
    int so_longlong = sizeof(long long int);
    int so_float = sizeof(float);
    int so_double = sizeof(double);

    printf("size of short:         %d bytes\n", so_short);
    printf("size of int:           %d bytes\n", so_int);
    printf("size of unsigned int:  %d bytes\n", so_uint);
    printf("size of long int:      %d bytes\n", so_long);
    printf("size of long long int: %d bytes\n", so_longlong);
    printf("size of float:         %d bytes\n", so_float);
    printf("size of double:        %d bytes\n", so_double);
    return 0;
}
