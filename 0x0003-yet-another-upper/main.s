.global _start                              
.section .text

_start:                                     // global entry point
    ldr     x4, =input                      // addr of input str
    ldr     x3, =output                     // addr of output str
    bl      parse                           // call parse
    ldr     x1, =output                     // sys_write param of str
    sub     x2, x3, x1                      // get output len by subtracting the pointers
    bl      sys_write                       // call sys_write
    bl      sys_exit                        // call sys_exit

parse:                                      // subroutine to parse str
    .loop:                                  // loop until byte pointed to by x1 is non-zero 
    ldrb    w5, [x4], #1                    // load char and increment pointer
    cmp     w5, #'z'                        // is letter > 'z'?
    b.gt    .continue                       // if letter > 'z', go to next letter
    cmp     w5, #'a'                        // is letter < 'a'?
    b.lt    .continue                       // if letter < 'a', go to next letter
    sub     w5, w5, #('a'-'A')              // letter is lower case, convert to upper case
    .continue:                              // advance to next byte, letter
    strb    w5, [x3], #1                    // store char to output str
    cmp     w5, #0                          // have we reached the null char, end of str?
    b.ne    .loop                           // loop if char isn't null
    ret                                     // return to where called

sys_write:                                  // subroutine to write string
    mov     x0, #1                          // stdout
    mov     x8, #64                         // sys_write syscall
    svc     0                               // call kernel
    ret                                     // return to where called

sys_exit:                                   // subroutine to exit
    mov     x0, #0                          // use 0 return code
    mov     x8, #93                         // sys_exit syscall
    svc     0                               // call kernel
    ret                                     // return to where called

.section .data
    input:  
        .asciz  "HeLlO WoRlD!\n"
    output: 
        .fill   255, 1, 0
