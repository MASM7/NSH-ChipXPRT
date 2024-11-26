`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11/26/2024 04:12:01 PM
// Design Name: 
// Module Name: multiplier4
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module multiplier4(
    input logic [4:0] A,
    input logic [4:0] B,
    output logic [7:0] product
    );
    
    logic Cin;
    logic [3:0] sum0;
    logic [3:0] sum1;
    logic Cout_temp0;
    logic Cout_temp1;
    logic [3:0] A0, A1, A2;
    logic [3:0] B0, B1, B2;
    
    // First adder
    assign Cin = 1'b0; 
//    assign A0[3:0] = A[3:0] & B[1];
    assign A0[3:0] = {(A[3] & B[1]), (A[2] & B[1]), (A[1] & B[1]), (A[0] & B[1])};
//    assign B0[3:0] = {1'b0, (A[3:1] & B[0])};
    assign B0[3:0] = {1'b0, (A[3] & B[0]), (A[2] & B[0]), (A[1] & B[0])};
    
    adder4 adder4_inst0(.A(A0[3:0]), .B(B0[3:0]), .S(sum0[3:0]), .c_in(Cin), .c_out(Cout_temp0));
    
    // Second adder
//    assign A1[3:0] = A[3:0] & B[2];
    assign A1[3:0] = {(A[3] & B[2]), (A[2] & B[2]), (A[1] & B[2]), (A[0] & B[2])};
    assign B1[3:0] = {Cout_temp0, sum0[3:1]};
    adder4 adder4_inst1(.A(A1[3:0]), .B(B1[3:0]), .S(sum1[3:0]), .c_in(Cin), .c_out(Cout_temp1));

    //Third adder
//    assign A2[3:0] = A[3:0] & B[3];
    assign A2[3:0] = {(A[3] & B[3]), (A[2] & B[3]), (A[1] & B[3]), (A[0] & B[3])};
    assign B2[3:0] = {Cout_temp1, sum1[3:1]};   
    adder4 adder4_inst2(.A(A2[3:0]), .B(B2[3:0]), .S(product[6:3]), .c_in(Cin), .c_out(product[7]));
    
    assign product[0] = A[0] & B[0];
    assign product[1] = sum0[0];
    assign product[2] = sum1[0];
    
endmodule
