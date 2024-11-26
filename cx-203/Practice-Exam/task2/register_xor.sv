`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11/26/2024 02:39:36 PM
// Design Name: 
// Module Name: register_xor
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


module register_xor
    #(parameter width = 8)
    (
    input logic clk,
    input logic reset,
    input logic en,
    input logic [width-1:0] data,
    output logic [width-1:0] q,
    output logic out
    );
    
    register #(.width(8)) reg_inst(
        .clk(clk),
        .reset(reset),
        .en(en),
        .data(data),
        .q(q)
    );
    
    assign out = ^q;
    
endmodule
