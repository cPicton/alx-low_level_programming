global start
	section .text
start:	mov rax,1
	mov rdi, 1
	mov rsi, msg
	mov rdx, 17
	syscall
	mov rax, 60
	xor rdi,rdi
	syscall
	section .rodata
msg:	db "Hello, Holberton", 10, 0
