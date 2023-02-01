; the reason why the space is that large for message is cause of the tab
SECTION .data
message:	db "Hello, Holberton", 0
format:	db "%s", 10, 0

SECTION .text
	extern printf
	global main


main:
	mov rsi, message
	mov rdi, format
	mov rax, 0
	call printf

	mov rax, 0
	ret
