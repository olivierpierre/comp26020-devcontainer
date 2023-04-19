#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char user_input[32] = "00000000000";
char password[32] = "secret";

int main(int argc, char **argv) {

    if(argc != 2) {
        printf("Usage: %s <password>\n", argv[0]);
        return 0;
    }

    strcpy(user_input, argv[1]); // oopsie!

    if(!strncmp(password, user_input, strlen(password))) {
        printf("login success!\n");
    } else {
        printf("wrong password!\n");
    }

    /* ... */
    return 0;
}
