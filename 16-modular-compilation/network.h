#ifndef NETWORK_H
#define NETWORK_H

typedef struct {
    int id;
    char content[128];
} request;

void init_network();
int rcv_request(request *r);

#endif /* NETWORK_H */
