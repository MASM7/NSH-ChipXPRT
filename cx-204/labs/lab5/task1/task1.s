.data
    array: .word 1,2,3,4,5,6,7,8,9

.text
    main:
        addi sp, sp, -16
        sw ra, 0(sp)
        sw s0, 4(sp)
        sw t0, 8(sp)
        sw t1, 12(sp)
        addi t0, x0, 0
        addi s0, x0, 0
        addi t1, x0, 0

        la a0, array
        li a1, 9

        jal loop

        jal print_value
        
        jr ra
        
        li a0, 10
        ecall

    loop:
        bge t0, a1, end_loop
        lw t1, 0(a0)
        add s0, s0, t1
        addi a0, a0, 4
        addi t0, t0, 1
        j loop

    end_loop:        
        mv a1, s0

        lw ra, 0(sp)
        lw s0, 4(sp)
        lw t0, 8(sp)
        lw t1, 12(sp)
        addi sp, sp, 16
    
    print_value:
        li a0, 1
        ecall