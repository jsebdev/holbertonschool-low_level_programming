section.text
   global main
main:

	mov	rdx,len     ;message length
	mov	rcx,msg     ;message to write
	mov	rbx,1       ;file descriptor (stdout)
	mov	rax,4       ;system call number (sys_write)
	int	0x80        ;call kernel
	;;	syscall

	mov	rax,1       ;system call number (sys_exit)
	;;int	0x80        ;call kernel
	;;	syscall

section	.data
	msg db 'Hello, Holberton', 0xa  ;string to be printed
	len equ $ - msg     ;length of the string
