`timescale 1ns / 1ps


module adder4(
    input [3:0] A,
    input [3:0] B,
    input c_in,
    output [3:0] S,
    output c_out
    );
    logic [3:1] C;
    
    full_adder f0(A[0], B[0], c_in, S[0], C[1]);
    full_adder f1(A[1], B[1], C[1], S[1], C[2]);
    full_adder f2(A[2], B[2], C[2], S[2], C[3]);
    full_adder f3(A[3], B[3], C[3], S[3], c_out);

endmodule
