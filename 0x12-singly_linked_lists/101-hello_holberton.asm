section .data
    format db "Hello, Holberton",10,0 ; The format string with newline

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, format   ; Load the address of the format string
    call printf       ; Call the printf function
    add rsp, 8        ; Adjust the stack
    mov rax, 60       ; Exit system call number (60 for 64-bit)
    xor rdi, rdi      ; Status code 0
    syscall

