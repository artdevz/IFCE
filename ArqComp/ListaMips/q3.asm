.data
	a: .space 1000
.text
main:

	la $t4, a
	sub $t0, $s1, $s2
	sw $t0, 40($t4)
	
	
	add $t1, $s0, $s2
	sw $t1, 980($t4)
	
	
	sub $t2, $s1, $s0
	sw $t2, 0($t4) 
