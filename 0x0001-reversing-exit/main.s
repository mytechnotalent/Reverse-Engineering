.global _start

_start:
sys_exit:                                   // subroutine to exit
    mov     x0, #0                          // use 0 return code
    mov     x8, #93                         // sys_exit syscall
    svc     0                               // call kernel
    ret                                     // return to where called
