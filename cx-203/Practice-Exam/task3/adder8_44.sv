`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11/26/2024 03:28:22 PM
// Design Name: 
// Module Name: adder8_44
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


module adder8_44(
    input logic [7:0] A,
    input logic [7:0] B,
    input logic Cin,
    output logic Cout,
    output logic [7:0] sum
    );
    logic Cout_temp;
    
    adder4 adder4_inst0(.A(A[3:0]), .B(B[3:0]), .S(sum[3:0]), .c_in(Cin), .c_out(Cout_temp));
    adder4 adder4_inst1(.A(A[7:4]), .B(B[7:4]), .S(sum[7:4]), .c_in(Cout_temp), .c_out(Cout));
    
endmodule
