global _start
section .text
_start: mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx, 14
	syscall

	section .rodata
msg: db "Hello, Holberton", 10
