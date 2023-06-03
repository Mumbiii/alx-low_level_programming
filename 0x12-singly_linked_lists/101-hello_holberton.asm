section .data
	format db "Hello, Holberton", 0
	fmt db "%s", 0

section .text
	global main
	extern printf

main:
	; Call printf to print the string
	mov edi, fmt
	mov esi, format
	xor eax, eax
	call printf

	; Exit the program
	xor edi, edi
	mov eax, 60
	syscall
