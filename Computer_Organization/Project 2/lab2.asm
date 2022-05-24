#Thomas Moore
.data
	w: .asciiz "Enter value for w: "
	x: .asciiz "Enter value for x: "
	y: .asciiz "Enter value for y: "
	z: .asciiz "Enter value for z: "
	printx: .asciiz "The value of x is: "
	
.text

#input w
	li $v0, 4
	la $a0, w
	syscall
	li $v0, 5
	syscall
	add $t1, $0, $v0 #$t1 = w
	
#input x
	li $v0, 4
	la $a0, x
	syscall
	li $v0, 5
	syscall
	add $t2, $0, $v0 #$t2 = x 
	
#input y
	li $v0, 4
	la $a0, y
	syscall
	li $v0, 5
	syscall
	add $t3, $0, $v0 #$t3 = y
	
#input z
	li $v0, 4
	la $a0, z
	syscall
	li $v0, 5
	syscall
	add $t4, $0, $v0 #$t4 = z 
	
#subtraction and if statment
	sub $t5, $t2, $t3 # x-y = $t5
	bge $t5, $t1, if # if [(x-y)>= w] go to if:
	
else:
	#set x to z
	move $t2, $t4
	j print
	
if:
	#set x to y
	move $t2, $t3
	j print
	
print:
	li $v0, 4
	la $a0, printx	
	syscall
	move $a0, $t2 #moving x to $a0
	li $v0, 1
	syscall
	
terminate:
	li $v0, 10
	syscall
	