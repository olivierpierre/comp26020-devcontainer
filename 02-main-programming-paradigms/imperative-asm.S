# To assemble and run, on the linux command line:
# as imperative-asm.S -o imperative-asm.o
# ld imperative-asm.o -o imperative-asm
# ./imperative-asm

        .global _start

        .text

quit:
        # exit(0)
        mov     $60, %rax               # system call 60 is exit
        xor     %rdi, %rdi              # we want return code 0
        syscall                         # invoke operating system to exit

_start:
        # write(1, message, 14)
        mov     $1, %rax                # system call 1 is write
        mov     $1, %rdi                # file handle 1 is stdout
        mov     $message, %rsi          # address of string to output
        mov     $14, %rdx               # number of bytes
        syscall                         # invoke operating system to do the write
        jmp     quit

message:
        .ascii  "Hello, world!\n"

