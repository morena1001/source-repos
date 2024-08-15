.386
.model flat, stdcall
.stack 4096
ExitProcess PROTO, dwExitCode:DWORD

.data
	Array WORD 10, 15, 25
	NewArray DWORD 0, 0, 0

.code
main PROC
	MOV ebx, TYPE Array
	MOV ecx, TYPE NewArray

	MOVZX eax, [Array]
	add eax, 20
	MOV [NewArray], eax

	MOVZX eax, [Array + ebx]
	add eax, 20
	MOV [NewArray + ecx], eax

	MOVZX eax, [Array + ebx * 2]
	add eax, 20
	MOV [NewArray + ecx * 2], eax
	

	INVOKE ExitProcess, 0
main ENDP

	
END main