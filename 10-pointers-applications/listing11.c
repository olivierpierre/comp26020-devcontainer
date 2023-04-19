#include <stdio.h>

typedef struct {
    int int_member1;
    int int_member2;
    int *ptr_member;
} my_struct;

my_struct ms;

int main(int argc, char **argv) {
    my_struct *p = &ms;

    (*p).int_member1 = 1;
    p->int_member2 = 2;   // s->x is a shortcut for (*s).x

    p->ptr_member = &(p->int_member2);

    printf("p->int_member1 = %d\n", p->int_member1);
    printf("p->int_member2 = %d\n", p->int_member2);
    printf("p->ptr_member = %p\n", p->ptr_member);
    printf("*(p->ptr_member) = %d\n", *(p->ptr_member));

    return 0;
}
