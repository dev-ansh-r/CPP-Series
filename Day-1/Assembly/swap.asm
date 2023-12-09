section .data
    num1 db 10
    num2 db 20

section .text
    global _start

_start:
    ; Swap the numbers
    mov al, [num1]
    mov bl, [num2]
    mov [num1], bl
    mov [num2], al

    ; Exit the program
    mov eax, 1
    xor ebx, ebx
    int 0x80
