/* To compile and run with the Linux command line:
 * gcc listing6.c -o listing6 -lpthread
 * ./listing6
 */

#define _GNU_SOURCE

#include <stdio.h>
#include <pthread.h>
#include <sched.h>

#define NUMBER_OF_THREADS   10

static void *thread_function(void *argument) {
    int id = *(int *)argument;

    for(int i=0; i<10; i++)
        printf("Thread %d running on core %d\n", id, sched_getcpu());
}

int main(void) {
    pthread_t threads[NUMBER_OF_THREADS];
    int thread_ids[NUMBER_OF_THREADS];

    for(int i=0; i<NUMBER_OF_THREADS; i++) {
        thread_ids[i] = i;
        pthread_create(&threads[i], NULL, &thread_function, &thread_ids[i]);
    }

    for(int i=0; i<NUMBER_OF_THREADS; i++)
        pthread_join(threads[i], NULL);
}
