default rel	; It tells nasm to use rip relative adressing
extern printf	; tells the assembler that this symbol exists outside of this file and needs to be referenced at a later stage
global main	; needed for gcc and it’s the entry point for libc

section .data
    message	db	"Hello, Holberton", 10, 0	; the string we want to print followed by a new line and null terminator
    fmt		db	"%s", 0				; format specifier

section .text
    main:
        push	rbp			; Create a stack-frame, re-aligning the stack to 16-byte alignment before calls
        mov	rdi, fmt
        mov	rsi, message
        mov	rax, 0
        call	printf wrt ..plt 	; call printf with relation to procedure linkage table
        pop	rbp 			; Pop stack
        mov	rax, 0   		; Exit code 0
        ret
