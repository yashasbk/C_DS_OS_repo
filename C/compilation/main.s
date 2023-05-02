	.file	"main.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "Enter the values of a and b\0"
.LC1:
	.ascii "%d %d\0"
.LC2:
	.ascii "addition is %d\12\0"
.LC3:
	.ascii "subtraction is %d\12\0"
.LC4:
	.ascii "multiplication is %d\12\0"
.LC5:
	.ascii "division is %d\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	leaq	.LC0(%rip), %rcx
	call	puts
	leaq	-8(%rbp), %rdx
	leaq	-4(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	leaq	.LC1(%rip), %rcx
	call	scanf
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	movl	%eax, %ecx
	call	add
	movl	%eax, %edx
	leaq	.LC2(%rip), %rcx
	call	printf
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	movl	%eax, %ecx
	call	sub
	movl	%eax, %edx
	leaq	.LC3(%rip), %rcx
	call	printf
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	movl	%eax, %ecx
	call	mul
	movl	%eax, %edx
	leaq	.LC4(%rip), %rcx
	call	printf
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	movl	%eax, %ecx
	call	div
	movl	%eax, %edx
	leaq	.LC5(%rip), %rcx
	call	printf
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (GNU) 9.2.0"
	.def	puts;	.scl	2;	.type	32;	.endef
	.def	scanf;	.scl	2;	.type	32;	.endef
	.def	add;	.scl	2;	.type	32;	.endef
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	sub;	.scl	2;	.type	32;	.endef
	.def	mul;	.scl	2;	.type	32;	.endef
	.def	div;	.scl	2;	.type	32;	.endef
