section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0

section .text
    extern printf

global main
main:
    push rbp
    mov rbp, rsp

    push hello
    push format
    call printf
    add rsp, 16

    mov eax, 0
    leave
    ret

