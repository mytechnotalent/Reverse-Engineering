.global _start
.section .text

_start:
    mov   x0, #0xfeed
    movk  x0, #0xbeef, lsl #0x10
    movk  x0, #0xdead, lsl #0x20
    movk  x0, #0x1337, lsl #0x30
exit:
    mov   x8, #0x5d
    mov   x0, #0x41
    svc   0
ret
