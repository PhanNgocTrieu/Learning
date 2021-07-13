	.file	"main.cpp"
	.section .rdata,"dr"
__ZStL19piecewise_construct:
	.space 1
	.section	.text$_ZN6Logger11SetSeverityEi,"x"
	.linkonce discard
	.align 2
	.globl	__ZN6Logger11SetSeverityEi
	.def	__ZN6Logger11SetSeverityEi;	.scl	2;	.type	32;	.endef
__ZN6Logger11SetSeverityEi:
LFB944:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, 4(%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE944:
	.section	.text$_ZN6LoggerC2Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZN6LoggerC2Ev
	.def	__ZN6LoggerC2Ev;	.scl	2;	.type	32;	.endef
__ZN6LoggerC2Ev:
LFB946:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	movl	$__ZTV6Logger+8, %edx
	movl	-4(%ebp), %eax
	movl	%edx, (%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE946:
	.section .rdata,"dr"
LC0:
	.ascii "%c\0"
LC1:
	.ascii "ERR\0"
LC2:
	.ascii "WARN\0"
LC3:
	.ascii "INFO\0"
LC4:
	.ascii "DEBUG\0"
LC5:
	.ascii "[%s][%s][%s]\12\0"
	.section	.text$_ZN10LoggerFile3logEiPKcz,"x"
	.linkonce discard
	.align 2
	.globl	__ZN10LoggerFile3logEiPKcz
	.def	__ZN10LoggerFile3logEiPKcz;	.scl	2;	.type	32;	.endef
__ZN10LoggerFile3logEiPKcz:
LFB948:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$600, %esp
	movl	$0, (%esp)
	call	_time
	movl	%eax, -16(%ebp)
	leal	-16(%ebp), %eax
	movl	%eax, (%esp)
	call	_localtime
	movl	(%eax), %edx
	movl	%edx, -52(%ebp)
	movl	4(%eax), %edx
	movl	%edx, -48(%ebp)
	movl	8(%eax), %edx
	movl	%edx, -44(%ebp)
	movl	12(%eax), %edx
	movl	%edx, -40(%ebp)
	movl	16(%eax), %edx
	movl	%edx, -36(%ebp)
	movl	20(%eax), %edx
	movl	%edx, -32(%ebp)
	movl	24(%eax), %edx
	movl	%edx, -28(%ebp)
	movl	28(%eax), %edx
	movl	%edx, -24(%ebp)
	movl	32(%eax), %eax
	movl	%eax, -20(%ebp)
	leal	-52(%ebp), %eax
	movl	%eax, 12(%esp)
	movl	$LC0, 8(%esp)
	movl	$256, 4(%esp)
	leal	-308(%ebp), %eax
	movl	%eax, (%esp)
	call	_strftime
	leal	20(%ebp), %eax
	movl	%eax, -568(%ebp)
	movl	-568(%ebp), %eax
	movl	%eax, 8(%esp)
	movl	16(%ebp), %eax
	movl	%eax, 4(%esp)
	leal	-564(%ebp), %eax
	movl	%eax, (%esp)
	call	_vsprintf
	movl	8(%ebp), %eax
	movl	4(%eax), %eax
	cmpl	12(%ebp), %eax
	jl	L9
	cmpl	$0, 12(%ebp)
	jne	L5
	movl	$LC1, -12(%ebp)
L5:
	cmpl	$1, 12(%ebp)
	jne	L6
	movl	$LC2, -12(%ebp)
L6:
	cmpl	$2, 12(%ebp)
	jne	L7
	movl	$LC3, -12(%ebp)
L7:
	cmpl	$3, 12(%ebp)
	jne	L8
	movl	$LC4, -12(%ebp)
L8:
	movl	8(%ebp), %eax
	movl	8(%eax), %eax
	leal	-564(%ebp), %edx
	movl	%edx, 16(%esp)
	movl	-12(%ebp), %edx
	movl	%edx, 12(%esp)
	leal	-308(%ebp), %edx
	movl	%edx, 8(%esp)
	movl	$LC5, 4(%esp)
	movl	%eax, (%esp)
	call	_fprintf
L9:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE948:
	.section .rdata,"dr"
LC6:
	.ascii "w+\0"
	.section	.text$_ZN10LoggerFileC1ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,"x"
	.linkonce discard
	.align 2
	.globl	__ZN10LoggerFileC1ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.def	__ZN10LoggerFileC1ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE;	.scl	2;	.type	32;	.endef
__ZN10LoggerFileC1ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE:
LFB951:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN6LoggerC2Ev
	movl	$__ZTV10LoggerFile+8, %edx
	movl	-12(%ebp), %eax
	movl	%edx, (%eax)
	movl	8(%ebp), %ecx
	call	__ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5c_strEv
	movl	$LC6, 4(%esp)
	movl	%eax, (%esp)
	call	_fopen
	movl	%eax, %edx
	movl	-12(%ebp), %eax
	movl	%edx, 8(%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE951:
	.section	.text$_ZN10LoggerFileC1EP6_iobuf,"x"
	.linkonce discard
	.align 2
	.globl	__ZN10LoggerFileC1EP6_iobuf
	.def	__ZN10LoggerFileC1EP6_iobuf;	.scl	2;	.type	32;	.endef
__ZN10LoggerFileC1EP6_iobuf:
LFB954:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN6LoggerC2Ev
	movl	$__ZTV10LoggerFile+8, %edx
	movl	-12(%ebp), %eax
	movl	%edx, (%eax)
	movl	-12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, 8(%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE954:
	.text
	.align 2
	.globl	__ZN6Logger11GetInstanceEi
	.def	__ZN6Logger11GetInstanceEi;	.scl	2;	.type	32;	.endef
__ZN6Logger11GetInstanceEi:
LFB958:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$20, %esp
	.cfi_offset 3, -12
	cmpl	$0, 8(%ebp)
	jne	L13
	movl	$12, (%esp)
	call	__Znwj
	movl	%eax, %ebx
	movl	__imp___iob, %eax
	addl	$32, %eax
	movl	%eax, (%esp)
	movl	%ebx, %ecx
	call	__ZN10LoggerFileC1EP6_iobuf
	subl	$4, %esp
	movl	%ebx, %eax
	jmp	L14
L13:
	movl	$12, (%esp)
	call	__Znwj
	movl	%eax, %ebx
	movl	__imp___iob, %eax
	addl	$64, %eax
	movl	%eax, (%esp)
	movl	%ebx, %ecx
	call	__ZN10LoggerFileC1EP6_iobuf
	subl	$4, %esp
	movl	%ebx, %eax
L14:
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_restore 3
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE958:
	.align 2
	.globl	__ZN6Logger11GetInstanceERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.def	__ZN6Logger11GetInstanceERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE;	.scl	2;	.type	32;	.endef
__ZN6Logger11GetInstanceERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE:
LFB959:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$20, %esp
	.cfi_offset 3, -12
	movl	$12, (%esp)
	call	__Znwj
	movl	%eax, %ebx
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	movl	%ebx, %ecx
	call	__ZN10LoggerFileC1ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	subl	$4, %esp
	movl	%ebx, %eax
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_restore 3
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE959:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC7:
	.ascii "Hello world\0"
LC8:
	.ascii "Debug message .....\0"
LC9:
	.ascii "Infor message .....\0"
LC10:
	.ascii "Error message .....\0"
LC11:
	.ascii "logdata.log\0"
	.align 4
LC12:
	.ascii "Infor message %d - %d - %d.....\0"
	.align 4
LC13:
	.ascii "Debug message %d - %d - %d.....\0"
	.align 4
LC14:
	.ascii "Error message %d - %d - %d.....\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB960:
	.cfi_startproc
	.cfi_personality 0,___gxx_personality_v0
	.cfi_lsda 0,LLSDA960
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%ebx
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x78,0x6
	.cfi_escape 0x10,0x3,0x2,0x75,0x7c
	subl	$96, %esp
	call	___main
	movl	$3, -12(%ebp)
	movl	$5, -16(%ebp)
	movl	$7, -20(%ebp)
	movl	$0, (%esp)
LEHB0:
	call	__ZN6Logger11GetInstanceEi
	movl	%eax, -24(%ebp)
	movl	-24(%ebp), %eax
	movl	$2, (%esp)
	movl	%eax, %ecx
	call	__ZN6Logger11SetSeverityEi
	subl	$4, %esp
	movl	-24(%ebp), %eax
	movl	(%eax), %eax
	movl	(%eax), %eax
	movl	$LC7, 8(%esp)
	movl	$1, 4(%esp)
	movl	-24(%ebp), %edx
	movl	%edx, (%esp)
	call	*%eax
	movl	-24(%ebp), %eax
	movl	(%eax), %eax
	movl	(%eax), %eax
	movl	$LC8, 8(%esp)
	movl	$3, 4(%esp)
	movl	-24(%ebp), %edx
	movl	%edx, (%esp)
	call	*%eax
	movl	-24(%ebp), %eax
	movl	(%eax), %eax
	movl	(%eax), %eax
	movl	$LC9, 8(%esp)
	movl	$2, 4(%esp)
	movl	-24(%ebp), %edx
	movl	%edx, (%esp)
	call	*%eax
	movl	$1, (%esp)
	call	__ZN6Logger11GetInstanceEi
	movl	%eax, -28(%ebp)
	movl	-28(%ebp), %eax
	movl	$2, (%esp)
	movl	%eax, %ecx
	call	__ZN6Logger11SetSeverityEi
	subl	$4, %esp
	movl	-28(%ebp), %eax
	movl	(%eax), %eax
	movl	(%eax), %eax
	movl	$LC7, 8(%esp)
	movl	$1, 4(%esp)
	movl	-28(%ebp), %edx
	movl	%edx, (%esp)
	call	*%eax
	movl	-28(%ebp), %eax
	movl	(%eax), %eax
	movl	(%eax), %eax
	movl	$LC8, 8(%esp)
	movl	$3, 4(%esp)
	movl	-28(%ebp), %edx
	movl	%edx, (%esp)
	call	*%eax
	movl	-28(%ebp), %eax
	movl	(%eax), %eax
	movl	(%eax), %eax
	movl	$LC10, 8(%esp)
	movl	$0, 4(%esp)
	movl	-28(%ebp), %edx
	movl	%edx, (%esp)
	call	*%eax
LEHE0:
	leal	-33(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSaIcEC1Ev
	leal	-60(%ebp), %eax
	leal	-33(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	$LC11, (%esp)
	movl	%eax, %ecx
LEHB1:
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
LEHE1:
	subl	$8, %esp
	leal	-60(%ebp), %eax
	movl	%eax, (%esp)
LEHB2:
	call	__ZN6Logger11GetInstanceERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
LEHE2:
	movl	%eax, -32(%ebp)
	leal	-60(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leal	-33(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSaIcED1Ev
	movl	-32(%ebp), %eax
	movl	$2, (%esp)
	movl	%eax, %ecx
	call	__ZN6Logger11SetSeverityEi
	subl	$4, %esp
	movl	-32(%ebp), %eax
	movl	(%eax), %eax
	movl	(%eax), %eax
	movl	$LC7, 8(%esp)
	movl	$1, 4(%esp)
	movl	-32(%ebp), %edx
	movl	%edx, (%esp)
LEHB3:
	call	*%eax
	movl	-32(%ebp), %eax
	movl	(%eax), %eax
	movl	(%eax), %eax
	movl	$LC9, 8(%esp)
	movl	$2, 4(%esp)
	movl	-32(%ebp), %edx
	movl	%edx, (%esp)
	call	*%eax
	movl	-32(%ebp), %eax
	movl	(%eax), %eax
	movl	(%eax), %eax
	movl	-20(%ebp), %edx
	movl	%edx, 20(%esp)
	movl	-16(%ebp), %edx
	movl	%edx, 16(%esp)
	movl	-12(%ebp), %edx
	movl	%edx, 12(%esp)
	movl	$LC12, 8(%esp)
	movl	$2, 4(%esp)
	movl	-32(%ebp), %edx
	movl	%edx, (%esp)
	call	*%eax
	movl	-32(%ebp), %eax
	movl	(%eax), %eax
	movl	(%eax), %eax
	movl	-20(%ebp), %edx
	movl	%edx, 20(%esp)
	movl	-16(%ebp), %edx
	movl	%edx, 16(%esp)
	movl	-12(%ebp), %edx
	movl	%edx, 12(%esp)
	movl	$LC13, 8(%esp)
	movl	$3, 4(%esp)
	movl	-32(%ebp), %edx
	movl	%edx, (%esp)
	call	*%eax
	movl	-32(%ebp), %eax
	movl	(%eax), %eax
	movl	(%eax), %eax
	movl	-20(%ebp), %edx
	movl	%edx, 20(%esp)
	movl	-16(%ebp), %edx
	movl	%edx, 16(%esp)
	movl	-12(%ebp), %edx
	movl	%edx, 12(%esp)
	movl	$LC14, 8(%esp)
	movl	$0, 4(%esp)
	movl	-32(%ebp), %edx
	movl	%edx, (%esp)
	call	*%eax
	movl	$0, %eax
	jmp	L23
L22:
	movl	%eax, %ebx
	leal	-60(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	L20
L21:
	movl	%eax, %ebx
L20:
	leal	-33(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSaIcED1Ev
	movl	%ebx, %eax
	movl	%eax, (%esp)
	call	__Unwind_Resume
LEHE3:
L23:
	leal	-8(%ebp), %esp
	popl	%ecx
	.cfi_restore 1
	.cfi_def_cfa 1, 0
	popl	%ebx
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE960:
	.def	___gxx_personality_v0;	.scl	2;	.type	32;	.endef
	.section	.gcc_except_table,"w"
LLSDA960:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 LLSDACSE960-LLSDACSB960
LLSDACSB960:
	.uleb128 LEHB0-LFB960
	.uleb128 LEHE0-LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 LEHB1-LFB960
	.uleb128 LEHE1-LEHB1
	.uleb128 L21-LFB960
	.uleb128 0
	.uleb128 LEHB2-LFB960
	.uleb128 LEHE2-LEHB2
	.uleb128 L22-LFB960
	.uleb128 0
	.uleb128 LEHB3-LFB960
	.uleb128 LEHE3-LEHB3
	.uleb128 0
	.uleb128 0
LLSDACSE960:
	.text
	.globl	__ZTV10LoggerFile
	.section	.rdata$_ZTV10LoggerFile,"dr"
	.linkonce same_size
	.align 4
__ZTV10LoggerFile:
	.long	0
	.long	__ZTI10LoggerFile
	.long	__ZN10LoggerFile3logEiPKcz
	.globl	__ZTV6Logger
	.section	.rdata$_ZTV6Logger,"dr"
	.linkonce same_size
	.align 4
__ZTV6Logger:
	.long	0
	.long	__ZTI6Logger
	.long	___cxa_pure_virtual
	.globl	__ZTI10LoggerFile
	.section	.rdata$_ZTI10LoggerFile,"dr"
	.linkonce same_size
	.align 4
__ZTI10LoggerFile:
	.long	__ZTVN10__cxxabiv120__si_class_type_infoE+8
	.long	__ZTS10LoggerFile
	.long	__ZTI6Logger
	.globl	__ZTS10LoggerFile
	.section	.rdata$_ZTS10LoggerFile,"dr"
	.linkonce same_size
	.align 4
__ZTS10LoggerFile:
	.ascii "10LoggerFile\0"
	.globl	__ZTI6Logger
	.section	.rdata$_ZTI6Logger,"dr"
	.linkonce same_size
	.align 4
__ZTI6Logger:
	.long	__ZTVN10__cxxabiv117__class_type_infoE+8
	.long	__ZTS6Logger
	.globl	__ZTS6Logger
	.section	.rdata$_ZTS6Logger,"dr"
	.linkonce same_size
	.align 4
__ZTS6Logger:
	.ascii "6Logger\0"
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_time;	.scl	2;	.type	32;	.endef
	.def	_localtime;	.scl	2;	.type	32;	.endef
	.def	_strftime;	.scl	2;	.type	32;	.endef
	.def	_vsprintf;	.scl	2;	.type	32;	.endef
	.def	_fprintf;	.scl	2;	.type	32;	.endef
	.def	__ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5c_strEv;	.scl	2;	.type	32;	.endef
	.def	_fopen;	.scl	2;	.type	32;	.endef
	.def	__Znwj;	.scl	2;	.type	32;	.endef
	.def	__ZNSaIcEC1Ev;	.scl	2;	.type	32;	.endef
	.def	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_;	.scl	2;	.type	32;	.endef
	.def	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev;	.scl	2;	.type	32;	.endef
	.def	__ZNSaIcED1Ev;	.scl	2;	.type	32;	.endef
	.def	__Unwind_Resume;	.scl	2;	.type	32;	.endef
	.def	___cxa_pure_virtual;	.scl	2;	.type	32;	.endef
