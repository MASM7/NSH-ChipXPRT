`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11/26/2024 01:57:08 PM
// Design Name: 
// Module Name: counter8_overflow
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


module counter8_overflow(
    input logic clk,
    input logic reset,
//    input logic [7:0] data,
    input logic count_7,
    output logic q,
    output logic overflow
    );
    
//    logic [7:0] count;
//    assign count = data;
    
    
    dff dff1(.clk(clk), .reset(reset), .data(count_7), .q(q));

    always @(posedge clk or negedge reset) begin
        if (~count_7) begin
            if (q) begin
                overflow <= 1;
            end
            else begin
                overflow <= 0;
            end
        end
        else begin
            overflow <= 0;
        end    
    end
        
endmodule
