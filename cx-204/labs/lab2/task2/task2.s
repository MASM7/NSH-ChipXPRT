.text

#li x5, 0xFFFFFFFF
#sub x5, x0, x5
#addi x5, x5, -1
#add a1, x0, x5
#addi a0, x0, 1
#ecall

#li x5, 0x12345678 # 0x12345678 equals 305419896
#add a1, x0, x5
#addi a0, x0, 1
#ecall

#li x5, 3
#addi x10, x5, 0x00001111
#add a1, x0, x5
#addi a0, x0, 1
#ecall
