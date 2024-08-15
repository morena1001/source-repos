.386
.MODEL FLAT, stdcall
.STACK 4096
ExitProcess PROTO, dwExitCode:DWORD

.data
	message BYTE "You already know what the next", 0Dh, 0Ah
			BYTE "variable will be, don't you?", 0
	len1 = ($ - message)
	len2 EQU 5 + len1
	

.code
_main PROC
	mov eax, len2
	inc eax
	

INVOKE ExitProcess, 0
_main ENDP

END _main

; EQU declares a const variable
; = declares a literal without taking up memory
; DWORD declares a literal and takes up memory