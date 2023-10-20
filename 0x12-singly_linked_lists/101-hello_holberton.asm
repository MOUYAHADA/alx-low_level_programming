section .data
hello db "Hello, Holberton",10,0  ; Message to be printed with a newline character and null-terminated

section .text
global main

; Function prototypes
extern printf

main:
; Function prologue
push rbp

; Prepare arguments and call printf function
mov rdi, hello  ; Load the address of the message
call printf     ; Call the printf function

; Function epilogue
pop rbp

; Exit the program
mov rax, 60     ; syscall number for exit (60)
xor rdi, rdi    ; Exit status (0)
syscall
