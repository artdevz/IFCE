.data
	a: .space 1000
.text
main:
	
	la $t4, a
	lw $t0, 60($t4)
	sub $s0, $t0, $s4
	
	
	lw $t0, 20($t4)
	lw $t1, 12($t4)
	add $s1, $t0, $t1
	
	
	lw $t0, 84($t4)
	sub $s2, $s1, $t0
	
	
	sub $t0, $s1, $s2
	sw $t0, 40($t4) 
