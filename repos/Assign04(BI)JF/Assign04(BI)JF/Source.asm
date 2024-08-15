COMMENT !
Author:	Josue Flores
Creation Date: 3/30/2022
Revisions:	
Date: 3/27/2022			Modified by:
Program Description:	
!

.386
.model flat, stdcall
.stack 4096
ExitProcess PROTO, dwExitCode:DWORD

.data
	pointsEarned   DWORD 25, 89, 49, 80
	pointsPossible DWORD 30, 100, 50, 150
	answer DWORD 0

.code
main PROC
	; Add all the Points Earned
	MOV eax, [pointsEarned]  ; Moves the 1st element of pointsEarned to eax
	ADD eax, [pointsEarned +  4]  ; Adds the 2nd element of pointsEarned to eax
	ADD eax, [pointsEarned +  8]  ; Adds the 3rd element of pointsEarned to eax
	ADD eax, [pointsEarned + 12]  ; Adds the final element of pointsearned to eax

	; Add all the Points Possible
	MOV ecx, [pointsPossible]  ; Moves the 1st element of PointsPossible to ecx
	ADD ecx, [pointsPossible +  4]  ; Moves the 2nd element of PointsPossible to ecx
	ADD ecx, [pointsPossible +  8]  ; Moves the 3rd element of PointsPossible to ecx
	ADD ecx, [pointsPossible + 12]  ; Moves the final element of PointsPossible to ecx

	; Divide Points Earned by Points Possible and multiply by 100
	MOV ebx, 100  ; Moves 100 to ebx
	MUL ebx  ; Multiplies eax by 100
	DIV ecx  ; Divides eax by ecx
	MOV answer, eax  ; Moves the answer to the variable


	INVOKE ExitProcess, 0
main ENDP


END main