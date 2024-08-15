TITLE assmblyTemplate32 (assmblyTemplate32.asm)

COMMENT !
Author: Josue Flores	
Creation Date:	March 9, 2022
Revisions:	
Date: MM/DD/YY			Modified by:
Program Description:	
!

.386
.model flat, stdcall
.stack 4096
ExitProcess PROTO, dwExitCode:DWORD

.data
	answer DWORD 0
	A      DWORD 5
	B      DWORD 2
	C1     DWORD 9
	D      DWORD 4


.code
main PROC

	; (A - B + C)
	mov eax, A
	sub eax, B
	add eax, C1

	; (C + D - A)
	mov ebx, C1
	add ebx, D
	sub ebx, A

	; answer = (A- B + C) - (C + D - A)
	sub eax, ebx
	mov answer, eax




	INVOKE ExitProcess, 0
main ENDP

	
END main