COMMENT !
Author:	Josue Flores
Creation Date: 3/11/2022		
!

.386
.model flat, stdcall
.stack 4096
ExitProcess PROTO, dwExitCode:DWORD

.data
	Y1 DWORD 0
	X1 DWORD 10
	X2 DWORD 15
	X3 DWORD 5
	X4 DWORD 2

	input  BYTE "input", 0
	output BYTE "output", 0
	inputlen  = ($ - input)
	outputlen = ($ - input)


.code
main PROC
	; Assigning X1, X2, X3, and X4 to registers
	MOV eax, X1   ; Assigns X1 to eax
	MOV ebx, X2   ; Assigns X2 to ebx
	MOV ecx, X3   ; Assigns X3 to ecx
	MOV edx, X4   ; Assigns X4 to edx
	
	; (X1 + X2)
	ADD eax, ebx   ; Adds register ebx(X2) to eax(X1)

	; (X3 + X4)
	ADD ecx, edx   ; Adds register edx(X4) to ecx(X3)

	; Y1 = (X1 + X2) - (X3 + X4)
	SUB eax, ecx  ; Subtracts register ebx from eax 
	MOV Y1 , eax  ; Moves register eax to variable Y1

	INVOKE ExitProcess, 0
main ENDP

END main