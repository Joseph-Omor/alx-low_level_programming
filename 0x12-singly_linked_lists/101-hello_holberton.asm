section .data
	hello_message db "Hello, Holberton", 0
	newline db 10, 0

section .text
	global main
	extern printf

main:
	; Prepare the arguments for printf
	mov rdi, hello_message
	xor rax, rax

	; Call printf
	call printf


	; Print a new line
	mov rdi, newline
	xor rax, rax
	call printf


	; Exit the program
	xor eax, eax
	ret
