.text
main:
	li $s0, 40
	li $t0, 0
	li $t1, 4
	li $t2, 100
loop:
	addi $s0, $s0, 20
	addi $t0, $t0, 1
	blt $t0, $t1, loop
	bgt $s0, $t2, greater
greater:
	subi $s0, $s0, 100
	move $a0, $s0    
	li $v0, 1
	syscall
exit:
	li $v0, 10
	syscall
	
