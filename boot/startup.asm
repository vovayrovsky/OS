format ELF

public _start
extrn kernel

section ".text" executable

_start:

	movzx edx, dl
	push ebx
	push esi
	push edx
	lgdt [gdtr]
	call kernel_main

	jmp @b

section ".data" writable

gdt:

	dq 0                 
	dq 0x00CF9A000000FFFF
	dq 0x00CF92000000FFFF

gdtr:

	dw $ - gdt
	dd gdt
