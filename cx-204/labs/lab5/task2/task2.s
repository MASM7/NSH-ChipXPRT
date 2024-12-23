.data
    n: .word 5

.text
    main:
        addi sp, sp, -8
        sw ra, 0(sp)
        sw s0, 4(sp)

        addi s0, x0, 1

        la a0, n
        lw a0, 0(a0)
        
        jal loop

        jal print_value
        
        jr ra
        
        li a0, 10
        ecall

    loop:
        beq a0, x0, end_loop
        mul s0, s0, a0
        addi a0, a0, -1
        j loop

    end_loop:        
        mv a1, s0

        lw ra, 0(sp)
        lw s0, 4(sp)
        addi sp, sp, 8
    
    print_value:
        li a0, 1
        ecall