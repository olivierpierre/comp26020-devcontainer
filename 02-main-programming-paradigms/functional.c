#include <stdio.h>

int fact(int x) {
    if(x == 0)
        return 1;
    
    return x * fact(x-1);
}

int main() {
    printf("6! = %d\n", fact(6));

    return 0;
}
