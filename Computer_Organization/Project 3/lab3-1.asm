#Thomas Moore
.data
	Intro: .asciiz "\nEnter 0 to exit and print sum: "
	Input: .asciiz "\nEnter an integer: "
	Sum: .asciiz "\nThe Sum is: "
.text
	li $s0, 0 # $s0 = 0
	li $v0, 4 # Print string
	la $a0, Intro
	syscall
Loop:
	li $v0, 4 # Print string
	la $a0, Input
	syscall
	li $v0, 5 # Read integer
	syscall
	beq $v0, $0, Terminate #Terminate if ($v0 == 0)
	add $s0, $s0, $v0 # add integer to current sum
	
	j Loop

Terminate:
	li $v0, 4 # Print string
	la $a0, Sum
	syscall
	
	li $v0, 1 # Print Int sum
	move $a0, $s0
	syscall

	li $v0, 10
	syscall
