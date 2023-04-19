#include <stdio.h>

#include "parser.h"

/* These two function are internal and their prototype is not in the header */
void internal_parsing_function1(request *r);
void internal_parsing_function2(request *r);

void parse_req(request *r) {
    internal_parsing_function1(r);
    internal_parsing_function2(r);
}

void internal_parsing_function1(request *r) {
    printf("[parser] parsing request %d -- phase 1\n", r->id);
}

void internal_parsing_function2(request *r) {
    printf("[parser] parsing request %d -- phase 2\n", r->id);
}
