.text

#li x5, 0x00001110
#andi x10, x5, 0x00000001
#add a1, x0, x10
#addi a0, x0, 1
#ecall


li x5, 0x11111111
li x10, 5
#addi x10, x10, -1
addi x1, x0, 1
sll x10, x1, x10
#sub x10, x0, x10
#addi x10, x10, -1
xor x15, x5, x10
add a1, x0, x15
addi a0, x0, 1
ecall
