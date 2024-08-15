COMMENT !
Author:	Josue Flores
Creation Date: 4 / 3/ 2022
Revisions: 4 / 4 / 2022
Date: 04/07/2022		
Program Description: Calculates sum of Fibonacci numbers between 0 and 1000000
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
	MOV eax, X1  ; Moves X1 to eax
	MOV ebx, X2  ; Moves X2 to ebx

whileLoop:
	ADD eax, ebx  ; Adds the the two previous numbers of the sequence together
	MOV edx, eax  ; Moves the sum to edx where it can be safely tested for oddity
	CMP eax, 1000000  ; Checks if eax is above 1 million
	JAE done  ; Jumps to label done if eax is greater than 1 million

	AND edx, 1  ; Checks the number for oddity
	JNZ summation  ; Jumps to label summation if number is odd
	MOV edx, eax  ; Moves eax to edx as a holder
	MOV eax, ebx  ; Moves ebx to eax
	MOV ebx, edx  ; Moves edx to ebx
	JMP whileLoop  ; Jumps back up to the top of the while loop


summation: 
	ADD sum, eax  ; Adds the odd Fibonacci number to sum
	MOV edx, eax  ; Moves eax to edx as a holder
	MOV eax, ebx  ; Moves ebx to eax
	MOV ebx, edx  ; Moves edx to ebx
	JMP whileLoop  ; Jumps back up to the top of the while loop
	
done:

	INVOKE ExitProcess, 0
main ENDP

	
END main