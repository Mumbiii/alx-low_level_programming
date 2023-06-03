section .data
    format db "Hello, Holberton", 0
    newline db 10, 0

section .text
    global main
    extern printf

main:
    sub rsp, 8    ; Adjust stack to align it to 16 bytes (8-byte return address + 8-byte alignment)
    mov edi, format
    xor eax, eax
    call printf

    mov edi, newline
    xor eax, eax
    call printf

    add rsp, 8    ; Restore the stack pointer
    xor eax, eax  ; Return 0 from the main function
    ret
