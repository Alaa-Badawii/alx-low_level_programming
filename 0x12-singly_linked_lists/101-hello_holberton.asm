; This is a program in assembly that prints Hello, Holberton, followed by a new line
; only allowed to use the printf function
; not allowed to use interrupts
; the program will be compiled using nasm and gcc

extern printf ; Declare the printf function

section .data
    msg: db "Hello, Holberton", 10, 0 ; The message to print

section .text
    global main ; The entry point of the program

main:
    push rbp ; Save the base pointer
    mov rbp, rsp ; Set up the stack frame
    mov rdi, msg ; Put the address of the message in the first argument register
    xor rax, rax ; Clear the number of floating point arguments
    call printf ; Call the printf function
    mov rax, 0 ; Set the return value to 0
    pop rbp ; Restore the base pointer
    ret ; Return from the main function
