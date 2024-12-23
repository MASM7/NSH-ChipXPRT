
.text
    main:
        li a0, 4
        li t0, 1
        li t2, 0
        mv t3, a0
        
        jal factorial
        mv s0, a0
 
        mv a1, t3
        li a0, 1
        ecall
        
        li a1, '!'
        li a0, 11
        ecall

        li a1, '='
        li a0, 11
        ecall
        
        mv a1, s0
        li a0, 1
        ecall
        
        li a1, '.'
        li a0, 11
        ecall
        
        li a0, 10 
        ecall
        
    factorial:
    
        blt a0, t0, baseCase #if reached base case stop
            mv t1, a0        #save n temprory
            addi a0, a0, -1  #new n = n-1             
            # save the caller saved registers
            addi sp, sp, -8
            sw t1, 0(sp)
            sw ra, 4(sp)
            jal factorial   
            # get back the caller saved registers
            lw t1, 0(sp)
            lw x1, 4(sp)
            addi sp, sp, 8  
            mul t2, a0, t1   # n*factorial(n-1)
            mv a0, t2
            ret
        baseCase:
        li a0, 1
        jr ra