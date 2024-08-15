COMMENT !
Author:	Josue Flores
Creation Date:	4/13/2022
Revisions:	
Date: 04/17/2022			Modified by:
Program Description:	
!

.386
.model flat, stdcall
.stack 4096
ExitProcess PROTO, dwExitCode:DWORD

.data
	answer DWORD 0
	cel DWORD 32

.code
main PROC
	push cel  ; Pushes cel variable into the stack
	call _convertC2F  ; calls the function
	mov answer, eax  ; moves the final answer into the variable

	

	INVOKE ExitProcess, 0
main ENDP

_convertC2F PROC
	push ebp  ; push pointer into stack
	mov ebp, esp ; moves location of esp pointer to ebp pointer
	mov eax, 9  ; moves 9 to eax
	mov ebx, [ebp + 8]  ; moves data from cel into ebx
	mul ebx  ; multiplies eax by ebx
	mov ebx, 5  ; mov 5 to ebx
	div ebx  ; divides ebx by eax
	add eax, 32  ; adds 32 to quotient 
	pop ebp  ; pops ebp from stack
	ret
_convertC2F ENDP


END main