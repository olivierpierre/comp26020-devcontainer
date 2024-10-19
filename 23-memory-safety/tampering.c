#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define CAESAR_SHIFT    1

char user_input[32] = "00000000000";
char password_hash[32] = "tfdsfu"; // "secret" encrypted with caesar cypher with shift 1

void caesar_encrypt(char* text) {
    int i = 0;
    char ch;
    
    while (text[i] != '\0') {
        ch = text[i];

        if (isupper(ch)) {
            text[i] = (ch - 'A' + CAESAR_SHIFT) % 26 + 'A';
        } else if (islower(ch)) {
            text[i] = (ch - 'a' + CAESAR_SHIFT) % 26 + 'a';
        }
        
        i++;
    }
}

int main(int argc, char **argv) {

    if(argc != 2) {
        printf("Usage: %s <password>\n", argv[0]);
        return 0;
    }

    strcpy(user_input, argv[1]); // oopsie!
    caesar_encrypt(user_input);

    if(!strncmp(password_hash, user_input, strlen(password_hash))) {
        printf("login success!\n");
        /* do important stuff  ... */
    } else {
        printf("wrong password!\n");
    }

    return 0;
}
