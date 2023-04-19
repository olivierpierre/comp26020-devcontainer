#include <stdio.h>
#include <unistd.h>

#include "network.h"
#include "parser.h"

int main(int argc, char **argv) {
    request req;

    printf("[main] calling init_network()\n");
    init_network();

    while(1) {
        printf("[main] calling rcv_request()\n");
        if(rcv_request(&req) != 0)
            break;

        printf("[main] calling parse_req()\n");
        parse_req(&req);
        sleep(1);
    }

    printf("[main] exiting now\n");
    return 0;
}
