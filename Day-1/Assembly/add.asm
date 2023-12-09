section .data
    num1 db 10
    num2 db 20
    result db 0

section .text
    global _start

_start:
    ; Move the values of num1 and num2 into registers
    mov al, [num1]
    mov bl, [num2]

    ; Add the values in the registers
    add al, bl

    ; Move the result back to memory
    mov [result], al

    ; Exit the program
    mov eax, 1
    xor ebx, ebx
    int 0x80
