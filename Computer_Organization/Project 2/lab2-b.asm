#Thomas Moore
.data
	r1: .asciiz "Enter value for register1: "
	r2: .asciiz "Enter value for register2: "

	printswap: .asciiz "\nThe values have been swapped "
	printr1: .asciiz "\nThe value stored in r1 is: "
	printr2: .asciiz "\nThe value stored in r2 is: "
	
.text

#input r1
	li $v0, 4
	la $a0, r1
	syscall
	li $v0, 5
	syscall
	add $s1, $0, $v0 #$s1 = r1
	
#input r2
	li $v0, 4
	la $a0, r2
	syscall
	li $v0, 5
	syscall
	add $s2, $0, $v0 #$s2 = r2	
	
#swap via mathmatics
	add $s1, $s1, $s2 # r1 = r1 + r2
	sub $s2, $s1, $s2 # r2 = r1 - r2
	sub $s1, $s1, $s2 # r1 = r1 - r2
	
print:
	li $v0, 4
	la $a0, printswap	
	syscall
	
	li $v0, 4
	la $a0, printr1	
	syscall
	move $a0, $s1 #moving r1 to $a0
	li $v0, 1 #print int
	syscall
	li $v0, 4
	la $a0, printr2
	syscall
	move $a0, $s2 #moving r2 to $a0
	li $v0, 1
	syscall
	
terminate:
	li $v0, 10
	syscall
	