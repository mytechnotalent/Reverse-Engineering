.686
.model flat, stdcall
.stack 4096

extrn	ExitProcess@4: proc				;1 param  1x4
extrn	MessageBoxA@16: proc				;4 params 4x4

.data
	msg_txt	    db	"Hello World", 0
	msg_caption db	"Hello World App", 0

.code
	main:
		push	0				;UINT uType
		lea	eax, msg_caption		;LPCSTR	lpCaption
		push	eax
		lea	eax, msg_txt			;LPCSTR	lpText
		push	eax
		push	0				;HWND hWnd
		call	MessageBoxA@16			;https://docs.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-messageboxa
		
		push	0				;UINT uExitCode
		call	ExitProcess@4			;https://docs.microsoft.com/en-us/windows/win32/api/processthreadsapi/nf-processthreadsapi-exitprocess
	end main
