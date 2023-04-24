// Print to the standard output without the C library, directly making a
// write syscall to stdout file desccriptor (by convention 1)
// compile as follows: gcc -nostdlib listing1.c -o listing1

/* Without libc the default entry point is _start */
void _start() {
    unsigned long ret;

    /* Write syscall */
    __asm__ __volatile(
            "syscall" :            // the syscall instruction
            "=a"(ret) :            // we'll get the return value in rax
            "a"(1),                // syscall number (1 for write)
            "D"(1),                // argument1: file descriptor (1 for stdout)
            "S"((long)"hello!\n"), // argument2: char array to print
            "d"(7) :               // argument3: number of bytes to write
            "rcx", "r11", "memory");

    /* exit syscall to quit properly */
    __asm__ __volatile( "syscall" : :  // syscall instruction
            "a"(60),                   // exit's syscall number
            "D"(0) :                   // exit parameter: 0
            "rcx", "r11", "memory");
}
