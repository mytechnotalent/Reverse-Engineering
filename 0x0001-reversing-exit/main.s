.section .text
    .global _start

_start:
exit:
    mov x8, #93
    mov x0, #0
    svc 0
