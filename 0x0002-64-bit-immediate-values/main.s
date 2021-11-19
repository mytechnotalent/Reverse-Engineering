.global _start
.section .text

_start:
    mov     x0, #0xfeed                     // move data into x0
    movk    x0, #0xbeef, lsl #0x10          // move data into lsl #0x10
    movk    x0, #0xdead, lsl #0x20          // move data into lsl #0x20
    movk    x0, #0x1337, lsl #0x30          // move data into lsl #0x30

sys_exit:                                   // subroutine to exit
    mov     x0, #0                          // use 0 return code
    mov     x8, #93                         // sys_exit syscall
    svc     0                               // call kernel
    ret                                     // return to where called
