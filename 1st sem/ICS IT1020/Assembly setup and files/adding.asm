name "add-sub"

org 100h

mov al, 5       ;Number 1.
mov bl, 10      ;Number 2.

; 5 + 10 = 15 (in decimal)
add bl, al      ; bl = bl + al

;Print result in binary: 
mov cx, 8            ;Start counter (counter = 8
                      ; as the number to be printed
                      ; is 8 bit long.
                      
print: mov ah, 2     ;Starting the fuction named print.
                      ; Setting the control bytes.
                      
       mov dl, '0'   ;Setting register value to zero
                      ; (in ascii).  
                      
       test bl, 10000000b  ;Testing the first bit.
                            ; AND operation of the
                            ; first bit of register
                            ; b1 with the first bit
                            ; of 10000000.   
                            
       jz zero       ;"jz" means jump if zero.
                      ; This checks if the zero flag
                      ; is set, if the zero flag is set,
                      ; program jumps to the given
                      ; function (in this case function
                      ; named zero).
                      
       mov dl, '1'   ;Setting the register value
                      ; to 1 (in ascii).
                      
zero:  int 21h       ;Calling the interrupt 21h.
                      ; This is a DOS command which
                      ; prints the value in the DX
                      ; register into the command window.
                      
       shl bl, 1     ;Bitwise shifting the BL register
                      ; to the left.
                      
loop print           ;Used to loop print function.
                      ; If the CX value isn't 0,
                      ; CX will be deducted 1 and the
                      ; program will jump to the given
                      ; function. (eg:at the first
                      ; occurance, 8 will be deducted 1,
                      ; making the register value 7).
                      ; Else if CX value is 0, it will
                      ; move to the immediate next line.

;Print binary suffix:
mov dl, 'b'          ;Setting the register value to 'b'.

int 21h              ;Calling the interrupt 21h.
                      ; This is a DOS command which
                      ; prints the value in the DX
                      ; register into the command window.

;Wait for any key press:
mov ah, 0            ;Reset control bytes.

int 16h              ;Calling the interrupt 16h.
                      ; This is a command to wait for a
                      ; keyboard interrupt to proceed.

ret
