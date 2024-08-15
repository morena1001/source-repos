COMMENT !
Author:	Josue Flores
Creation Date: 4 / 3/ 2022
Revisions:	
Date: 04/07/2022			Modified by:
Program Description:	
!

.386
.model flat, stdcall
.stack 4096
ExitProcess PROTO, dwExitCode:DWORD

.data
	X1 DWORD 0
	X2 DWORD 1
	sum DWORD 1

.code
main PROC
	MOV ecx, 999998 
	MOV eax, X1
	MOV ebx, X2

FibLoop:
	ADD eax, ebx
	MOV edx, eax

	AND edx, 1
	JNZ Summation
	MOV edx, eax
	MOV eax, ebx
	MOV ebx, edx

	loop FibLoop

Summation: 
	ADD sum, eax
	MOV edx, eax
	MOV eax, ebx
	MOV ebx, edx

	loop FibLoop
	

	INVOKE ExitProcess, 0
main ENDP

	
END main