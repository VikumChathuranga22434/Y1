name "hello-world!"

; this example prints out  "hello world!"
; by writing directly to video memory.
; in vga memory: first byte is ascii character, byte that follows is character attribute.
; if you change the second byte, you can change the color of
; the character even after it is printed.
; character attribute is 8 bit value,
; high 4 bits set background color and low 4 bits set foreground color.

; hex    bin        color
; 
; 0      0000      black
; 1      0001      blue
; 2      0010      green
; 3      0011      cyan
; 4      0100      red
; 5      0101      magenta
; 6      0110      brown
; 7      0111      light gray
; 8      1000      dark gray
; 9      1001      light blue
; a      1010      light green
; b      1011      light cyan
; c      1100      light red
; d      1101      light magenta
; e      1110      yellow
; f      1111      white
 


org 100h

; set video mode    
mov ax, 3     ; text mode (ah=0, al=3)
int 10h       ; do it!

; cancel blinking and enable all 16 colors:
mov ax, 1003h
mov bx, 0
int 10h


; set segment register:
mov     ax, 0b800h     ; 0B800h is the address of VGA card for text mode
mov     ds, ax         ; move AX into DS, so DS hold the address of VGA card

; print "Hey"
; first byte is ascii code, second byte is color code.


mov [50h], 'H'
mov [51h], 11110000b
 
mov [52h], 'e'
mov [53h], 11110000b 

mov [54h], 'l'
mov [55h], 11110000b

mov [56h], 'l'         
mov [57h], 11110000b

mov [58h], 'o'
mov [59h], 11110000b

mov [5Ch], 'W'
mov [5Dh], 11110000b

mov [5Eh], 'o'
mov [5Fh], 11110000b

mov [60h], 'r'
mov [61h], 11110000b

mov [62h], 'l'
mov [63h], 11110000b

mov [64h], 'd'
mov [65h], 11110000b

mov [66h], '!'
mov [67h], 11110000b

; wait for any key press:
mov ah, 0
int 16h

ret

