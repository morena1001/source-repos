COMMENT !
Author:	
Creation Date:	
Revisions:	
Date: MM/DD/YY			Modified by:
Program Description:	
!

.386
.model flat, stdcall
.stack 4096
ExitProcess PROTO, dwExitCode:DWORD

.data
	Answer DWORD 0
	A1 DWORD 10
	B1 DWORD 5
	C1 DWORD 5
	D1 DWORD 5

.code
main PROC
	MOV eax, A1
	MOV ebx, B1
	MUL ebx
	
	MOV answer, eax

	MOV eax, C1
	MOV ecx, D1
	MUL ecx

	MOV ebx, eax	
	MOV eax, answer
	DIV ebx

	MOV answer, eax


	INVOKE ExitProcess, 0
main ENDP

	
END main