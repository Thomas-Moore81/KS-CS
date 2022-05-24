Thomas Moore
.data

Fvalue: .asciiz "\nEnter a value for F: "
Gvalue: .asciiz "\nEnter a value for G: "
Answer: .asciiz "\nThe Answer for f = g - (f + 5) is: "

.text

li $t0, 5 #Constant 5
li $t1, 3 #Loop limit
li $t2, 0 #0 for loop to be i++

Loop:
	beq $t2, $t1, End
	li $v0, 4 #print string
	la $a0, Fvalue 
	syscall
	li $v0, 5 #read int
	syscall
	move $s0, $v0 #moving value of f
	li $v0, 4 #print sting
	la $a0, Gvalue
	syscall
	li $v0, 5 #read int
	syscall
	move $s1, $v0 #moving value of g
	add $t3, $s0, $t0 #adding (f+5)
	sub $s2, $s1, $t3 #subtracting (f+5) from g
	li $v0, 4 #printing string
	la $a0, Answer
	syscall
	move $a0, $s2 #moving answer to $a0
	li $v0, 1 #print int
	syscall
	add $t2, $t2, 1
	j Loop #jump to top of the Loop
End:
	li $v0, 10 #terminate 
	syscall