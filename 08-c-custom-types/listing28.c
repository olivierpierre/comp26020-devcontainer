#include <stdio.h>

enum color {
    RED,
    BLUE,
    GREEN,
    YELLOW
};

int main(int argc, char **argv) {
    enum color c1 = BLUE;

    switch(c1) {
        case RED:
            printf("c1 is red\n");
            break;

        case BLUE:
            printf("c1 is blue\n");
            break;

        case GREEN:
            printf("c1 is green\n");
            break;

        case YELLOW:
            printf("c1 is yellow\n");
            break;

        default:
            printf("Unknown color\n");
    }

    printf("RED was assigned: %d\n", RED);
    printf("BLUE was assigned: %d\n", BLUE);
    printf("GREEN was assigned: %d\n", GREEN);
    printf("YELLO was assigned: %d\n", YELLOW);

    return 0;
}
