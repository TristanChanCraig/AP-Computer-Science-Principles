########################################################################
# Main program description:
# Read 3 integers from the command line, sort them using the order3
# function, then print the sorted values.
#
# Arguments: None.
#
# Returns: Nothing.
########################################################################



########################################################################
# Order3 Description:
# Given 3 numbers, order the numbers from lowest to highest.
#
# Arguments:
# $a0, $a1, $a2 = 3 positive integers, one in each register
#
# Returns:
# $a0 = lowest number
# $a1 = middle (median) number
# $a2 = highest number
########################################################################

.data
first: .asciiz "Enter the first integer: "
second: .asciiz "Enter the second integer: "
third: .asciiz "Enter the third integer: "
endl: .asciiz "\n"

.text
main:
	la $a0, first
	li $v0, 4
	syscall
	li $v0, 5	
	syscall
	move $a3, $v0
	
	la $a0, second
	li $v0, 4
	syscall
	li $v0, 5	
	syscall
	move $a1, $v0
	
	la $a0, third
	li $v0, 4
	syscall
	li $v0, 5	
	syscall
	move $a2, $v0
	
	move $a0, $a3

	jal order3 
	
	li $v0, 1			
	syscall
	
	la $a0, endl
	li $v0, 4
	syscall
	
	move $a0, $a1
	li $v0, 1			
	syscall
	
	la $a0, endl
	li $v0, 4
	syscall
	
	move $a0, $a2
	li $v0, 1			
	syscall
	
exit:
	li $v0, 10
	syscall

order3:	
	bgt	$a0, $a1, exchange1
	bgt	$a1, $a2, exchange2
	b	next
exchange1:	
	xor	$a0, $a0, $a1	#a = a ^= b
	xor	$a1, $a1, $a0	#b = b ^= a
	xor	$a0, $a0, $a1	#a = a ^= b
	b	order3
exchange2:	
	xor	$a1, $a1, $a2	#b = b ^= c
	xor	$a2, $a2, $a1	#c = c ^= b
	xor	$a1, $a1, $a2	#b = b ^= c
	b	order3
next:		
	jr	$ra
