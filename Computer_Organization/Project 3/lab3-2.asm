#Thomas Moore
.data
	Intro: .asciiz "\nEnter 3 integers: "
	Sum: .asciiz "\nThe Sum of the two largest integers are: "
	test: .asciiz "\nThis is broken: "
.text
	la $a0, Intro 
	li $v0, 4 # print Intro string
	syscall
	
	li $v0, 5 # read int
	syscall
	move $t0, $v0 # Number 1 = $t0
	
	li $v0, 5 # read int
	syscall
	move $t1, $v0 # Number 2 = $t1
	
	li $v0, 5 # read int
	syscall
	move $t2, $v0 # Number 3 = $t2
	
	bgt $t0, $t1, Skip # if (Number 1 > Number 2) Jump to Skip
	move $t4, $t1 # if Number 2 is greater move it to $t4
	j Skip2
Skip:
	move $t3, $t0 # move Number 1 to $t3
	bgt $t3,$t2, Add # Number 1 > 3 Jump to Add
	bgt $t1, $t2 Add3 # 2 > 3 Jump Add3
	
Skip2:
	bgt $t1, $t2, Add2 # Number 2 > 3 Jump to Add2
	add $t5, $t4, $t2 # if 3 is greater add 
	
	j Terminate
	
Add: 
	bgt $t1, $t2, Add4 #2>3
	add $t5, $t3, $t2 # Add 1 and 3
	
	j Terminate
	
Add2:
	bgt $t1, $t0, Add5 # 3 > 1 Jump Add5
	add $t5, $t4, $t1 # Add2
	
	j Terminate
Add3:
	add $t5, $t2, $t3 # add 3 and 1
	
	j Terminate

Add4: 
	add $t5, $t3, $t1 #add 1 and 2
	
	j Terminate
	
Add5: 
	add $t5, $t4, $t2
	
	j Terminate
	
Terminate:
	la $a0, Sum
	li $v0 4
	syscall
	
	move $a0, $t5
	li $v0, 1
	syscall
	
	li $v0, 10
	syscall
