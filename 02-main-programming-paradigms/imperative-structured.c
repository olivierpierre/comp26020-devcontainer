/* To compile and execute on the Linux command line:
 * gcc listing2.c -o listing2
 * ./lising2
 */

#include <stdio.h>

/* Check if a number is prime */
int is_prime_number(int number) {

    if(number < 2)
        return 0;

    for(int j=2; j<number; j++)
        if(number % j == 0)
            return 0;

    return 1;
}

/* Check for each of the first 10 natural integers which are prime */
int main(void) {
    int i;
    int total_iterations = 10;

    for(i=0; i<total_iterations; i++)
        if(is_prime_number(i))
            printf("%d is a prime number\n", i);
        else
            printf("%d is not a prime number\n", i);

    return 0;
}
