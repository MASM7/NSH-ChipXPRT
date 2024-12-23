.data
    str: .string "fibonacci"

.text
    main:
        li a0, 5
        li t0, 2
        li t2, 0
        mv t3, a0
        
        jal fibonacci
        mv s0, a0
        
        la a1, str
        li a0, 4
        ecall

        li a1, ' '
        li a0, 11
        ecall
        
        mv a1, t3
        li a0, 1
        ecall

        li a1, '='
        li a0, 11
        ecall
        
        mv a1, s0
        li a0, 1
        ecall

        li a0, 10
        ecall

    fibonacci:
        blt a0, t0, baseCase
            mv t1, a0
            addi a0, a0, -1
            addi sp, sp, -8
            sw t1, 0(sp)
            sw ra, 4(sp)
        jal fibonacci
        
        lw t1, 0(sp)
        lw ra, 4(sp)
        addi sp, sp, 8
        
        mv t2, a0
        addi a0, t1, -2
        addi sp, sp, -8
        sw t2, 0(sp)
        sw ra, 4(sp)
        jal fibonacci  
  
        lw t2, 0(sp)
        lw ra, 4(sp)
        addi sp, sp, 8
        
        add t2, a0, t2
        mv a0, t2
        ret

    baseCase:
        ret