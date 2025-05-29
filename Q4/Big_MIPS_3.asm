.data
prompt: .asciiz "Enter a random integer: "
prteven: .asciiz "The integer is even"
prtodd: .asciiz "The integer is odd"

.text
main:
	la $a0, prompt 
	li $v0, 4
	syscall
	li $v0, 5        
	syscall
	move $t0, $v0
	
	li $t1, 2
	li $t2, 0
	
	div $t0, $t1
	mflo $t3
	mfhi $t4
	beq $t4, $t2, even
odd:
	la $a0, prtodd
	li $v0, 4
	syscall
	j exit      
even:
	la $a0, prteven
	li $v0, 4
	syscall	
exit:
	li $v0, 10
	syscall
