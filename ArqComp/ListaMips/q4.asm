.data
	a: .space 1000
.text
main:
	la $t4, a
	sub $t2, $s2, $s3
	lw $t1, 12($t4)
	add $t0, $t1, $t2
	sw $t0, 136($t4)
	
	
	sub $t0, $s1, $s2
	lw $t1, 268($t4)
	add $t2, $t0, $t1
	sw $t2, 180($t4)
	
	
	lw $t0, 72($t4)
	sub $t1, $s1, $t0
	add $t2, $s1, $s3
	sw $t2, 316($t4)
	
	
	lw $t0, 8($t4)
	lw $t1, 16($t4)
	sub $t2, $t0, $t1
	sw $t2, 328($t4)
