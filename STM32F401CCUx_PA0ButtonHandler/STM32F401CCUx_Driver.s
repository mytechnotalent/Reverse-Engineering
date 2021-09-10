;// MIT License
;//
;// Developer: Kevin Thomas
;//
;// Copyright (c) 2021 My Techno Talent, LLC
;//
;// Permission is hereby granted, free of charge, to any person obtaining a copy
;// of this software and associated documentation files (the "Software"), to deal
;// in the Software without restriction, including without limitation the rights
;// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
;// copies of the Software, and to permit persons to whom the Software is
;// furnished to do so, subject to the following conditions:
;//
;// The above copyright notice and this permission notice shall be included in all
;// copies or substantial portions of the Software.
;//
;// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
;// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
;// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
;// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
;// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
;// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
;// SOFTWARE.

                        AREA    STM32F401CCUx_Driver,CODE,READONLY,ALIGN=2

RCC_BASE                EQU     0x40023800
RCC_AHB1ENR_OFFSET      EQU     0x30
RCC_AHB1ENR             EQU     RCC_BASE + RCC_AHB1ENR_OFFSET
GPIOA_BASE              EQU     0x40020000
GPIOA_MODER_OFFSET      EQU     0x00
GPIOA_MODER             EQU     GPIOA_BASE + GPIOA_MODER_OFFSET
GPIOA_IDR_OFFSET        EQU     0x10
GPIOA_IDR               EQU     GPIOA_BASE + GPIOA_IDR_OFFSET
GPIOC_BASE              EQU     0x40020800
GPIOC_MODER_OFFSET      EQU     0x00
GPIOC_MODER             EQU     GPIOC_BASE + GPIOC_MODER_OFFSET
GPIOC_OTYPER_OFFSET     EQU     0x04
GPIOC_OTYPER            EQU     GPIOC_BASE + GPIOC_OTYPER_OFFSET
GPIOC_OSPEEDR_OFFSET	EQU     0x08
GPIOC_OSPEEDR           EQU     GPIOC_BASE + GPIOC_OSPEEDR_OFFSET
GPIOC_BSRR_OFFSET       EQU     0x18    
GPIOC_BSRR              EQU     GPIOC_BASE + GPIOC_BSRR_OFFSET

RCC_AHB1ENR_GPIOAEN     EQU     1<<0
RCC_AHB1ENR_GPIOCEN     EQU     1<<2
GPIOA_MODER0_0_MSB      EQU     ~(0<<0)
GPIOA_MODER0_0_LSB      EQU     ~(0<<0)
GPIOA_IDR0_1            EQU     1
GPIOC_MODER13_0_MSB     EQU     ~(0<<27) 
GPIOC_MODER13_1_LSB     EQU     1<<26
GPIOC_OTYPER_OT13_0     EQU     ~(0<<13)
GPIOC_OSPEEDR13_1_MSB   EQU     1<<27
GPIOC_OSPEEDR13_1_LSB   EQU     1<<26
GPIOC_BSRR_BS13_1       EQU     1<<13
GPIOC_BSRR_BR13_1       EQU     1<<29

ConfigGPIOAIn                
                        push    {r1-r12,lr}
                        ldr     r0,=RCC_AHB1ENR
                        ldr     r1,[r0]
                        orr     r1,#RCC_AHB1ENR_GPIOAEN
                        str     r1,[r0]
                        ldr     r0,=GPIOA_MODER
                        ldr     r1,[r0]
                        and     r1,#GPIOA_MODER0_0_MSB
                        str     r1,[r0]
                        ldr     r0,=GPIOA_MODER
                        ldr     r1,[r0]
                        and     r1,#GPIOA_MODER0_0_LSB
                        str     r1,[r0]
                        pop     {r1-r12,pc}
ConfigGPIOCOut            
                        push    {r1-r12,lr}
                        ldr     r0,=RCC_AHB1ENR
                        ldr     r1,[r0]
                        orr     r1,#RCC_AHB1ENR_GPIOCEN
                        str     r1,[r0]
                        ldr     r0,=GPIOC_MODER
                        ldr     r1,[r0]
                        and     r1,#GPIOC_MODER13_0_MSB
                        str     r1,[r0]
                        ldr     r0,=GPIOC_MODER
                        ldr     r1,[r0]
                        orr     r1,#GPIOC_MODER13_1_LSB
                        str     r1,[r0]
                        bl      GPIOCBitSet13
                        ldr     r0,=GPIOC_OTYPER
                        ldr     r1,[r0]
                        and     r1,#GPIOC_OTYPER_OT13_0    
                        str     r1,[r0]
                        ldr     r0,=GPIOC_OSPEEDR
                        ldr     r1,[r0]
                        and     r1,#GPIOC_MODER13_0_MSB
                        str     r1,[r0]
                        ldr     r0,=GPIOC_MODER
                        ldr     r1,[r0]
                        orr     r1,#GPIOC_MODER13_1_LSB
                        str     r1,[r0]
                        pop     {r1-r12,pc}
GPIOCBitSet13
                        push    {r1-r12,lr}
                        ldr     r0,=GPIOC_BSRR
                        ldr     r1,[r0]
                        orr     r1,#GPIOC_BSRR_BS13_1    
                        str     r1,[r0]
                        pop     {r1-r12,pc}            
GPIOCBitReset13
                        push    {r1-r12,lr}
                        ldr     r0,=GPIOC_BSRR
                        ldr     r1,[r0]
                        orr     r1,#GPIOC_BSRR_BR13_1
                        str     r1,[r0]
                        pop     {r1-r12,pc}    
						
                        ALIGN
                        END