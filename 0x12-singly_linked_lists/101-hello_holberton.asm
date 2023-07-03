; Declare some constants
section .data
    msg: db "Hello, Holberton", 10 ; The string to print, followed by newline
    len: equ $ - msg ; The length of the string

; Declare the text section
section .text
    global main ; The entry point
    extern printf ; The external function

main:
    ; Prepare the arguments for printf
    mov rdi, msg ; The format string is the first argument
    mov rax, 0 ; No vector registers are used
    ; Call printf
    call printf
    ; Exit the program
    mov rax, 60 ; The system call number for exit
    mov rdi, 0 ; The exit code
    syscall ; Invoke the kernel
