#Thomas Moore
.data
	zero: .asciiz "Zero "
	one: .asciiz "One  "
	two: .asciiz "Two "
	three: .asciiz "Three "
	four: .asciiz "Four "
	five: .asciiz "Five "
	six: .asciiz "Six "
	seven: .asciiz "Seven "
	eight: .asciiz "Eight "
	nine: .asciiz "Nine "
	intro: .asciiz "Enter a positive number: "
	error: .asciiz "Invaild Entry"
	
.text
	la $a0, intro
	li $v0, 4 #print string
	syscall
	li $v0, 5 #read in int
	syscall
	move $t0, $v0 #move input to $t0
	blt $t0, $0,invalid #if negative branch to invalid
	li $t1, 10 #storing int 10
	li $v0, 4
	li $t4, -1 #storing int -1

loop1:
	bne $t0, $0, digit
	beq $t2, $t0, check
	
digit:
	div $t0, $t1
	mflo $t3
	mfhi $t2
	move $t0, $t3
	addi $t4, $t4, 1 #iterations
	addi $sp, $sp, 4
	sw $t2, 0($sp)
	j loop1

check:
	lw $t2, 0($sp)
	
loop2:
	beq $t4, $0, terminate
	addi $sp, $sp, -4
	lw $t2, 0($sp)
	addi $t4, $t4, -1

pone:
	bne $t2, 1, ptwo
	la $a0, one
	syscall
	j loop2
	
ptwo:
	bne $t2, 2, pthree
	la $a0, two
	syscall
	j loop2
	
pthree:
	bne $t2, 3, pfour
	la $a0, three
	syscall
	j loop2
	
pfour:
	bne $t2, 4, pfive
	la $a0, four
	syscall
	j loop2
	
pfive:
	bne $t2, 5, psix
	la $a0, five
	syscall
	j loop2
	
psix:
	bne $t2, 6, pseven
	la $a0, six
	syscall
	j loop2
	
pseven:
	bne $t2, 7, peight
	la $a0, seven
	syscall
	j loop2
	
peight:
	bne $t2, 8, pnine
	la $a0, eight
	syscall
	j loop2
	
pnine:
	bne $t2, 9, pzero
	la $a0, nine
	syscall
	j loop2

pzero:
	la $a0, zero
	syscall
	j loop2

invalid:
	la $a0, error
	li $v0, 4
	syscall
	
terminate:
	li $v0, 10 #standard termination
	syscall