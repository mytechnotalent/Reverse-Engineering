mov bp, 0xffff							; set the stack base
mov sp, bp							; set the top of the stack to base

call set_video_mode
call get_char_input

jmp $

set_video_mode:
	mov al, 0x03						; 80x25 8x8 640x200 16 gray
	mov ah 0x00
	int 0x10
	ret

get_char_input:						    
	xor ah, ah                  				; wait for a numeric char
	int 0x16            
	cmp al, 0x30						; compare if numeric 0
	jl get_char_input				        ; jmp if less than and restart loop
	cmp al, 0x39						; compare if numeric 9
	jg get_char_input				        ; jmp if greater than and restart loop
	mov ah, 0x0e
	int 0x10
	jmp get_char_input					; re-start internal subroutine

times 0x1fe-($-$$) db 0
dw 0xaa55
