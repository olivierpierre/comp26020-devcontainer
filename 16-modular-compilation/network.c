#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "network.h"

/* this is an internal function so its prototype is not in network.h */
static void generate_request(request *r);

static int request_counter = 0;

void init_network() {
    /* init code here ... */
    printf("[network] network initialized\n");
    return;
}

int rcv_request(request *r) {
    generate_request(r);

    printf("[network] request %d received\n", r->id);

    /* will return 1 (i.e. exit) after 5 requests */
    request_counter++;
    return (request_counter == 5);
}

static void generate_request(request *r) {
    /* generate a random request */
    r->id = rand()%100;
    strcpy(r->content, "request content");
}
