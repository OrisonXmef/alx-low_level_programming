section .data
    hello db 'Hello, Holberton',0

section .text
    global main
    extern printf

main:
    push rdi
    lea rdi, [hello]
    call printf
    pop rdi

    mov rax, 60         ; Exit the program (syscall number for exit)
    xor rdi, rdi        ; Status code 0
    syscall

