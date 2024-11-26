`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11/11/2024 05:18:25 PM
// Design Name: 
// Module Name: full_adder
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


module full_adder(
    input logic a,
    input logic b,
    input logic c_in,
    output logic s_out,
    output logic c_out
    );
    logic c1, c2, s1;
    
    half_adder h1(.s(s1), .c(c1), .a(a), .b(b));
    half_adder h2(.s(s_out), .c(c2), .a(s1), .b(c_in));
    
        
//    // Half-adder 1
//    andgate and1(.f(c1), .a(a), .b(b));
//    xorgate xor1(.f(s1), .a(a), .b(b));
    
//    // Half-adder 2 
//    andgate and2(.f(c2), .a(s1), .b(c_in));
//    xorgate xor2(.f(s_out), .a(s1), .b(c_in));
    
    orgate G3(.f(c_out), .a(c1), .b(c2));
    
endmodule