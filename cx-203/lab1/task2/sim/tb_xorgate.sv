`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11/11/2024 03:26:05 PM
// Design Name: 
// Module Name: tb_xorgate
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


module tb_xorgate;
    // Declare testbench signals
    logic a, b;
    logic f, c;
    // Instantiate the andgate module
    xorgate dut (
        .a(a),
        .b(b),
        .f(c)
    );

    // Testbench Logic
    initial begin
        // Display header
        $display("Time\t a\t b\t c\t");
        $display("------------------------");
        
        // Apply test vectors with $display statements
        // Case 1
        a = 0; b = 0; #10;
        // Display the value of a, b, and f alog with time
        $display("%0t\t %b\t %b\t %b", $time, a, b, c);
        // Case 2
        a = 0; b = 1; #10;
        $display("%0t\t %b\t %b\t %b", $time, a, b, c);
        // Case 3
        a = 1; b = 0; #10;
        $display("%0t\t %b\t %b\t %b", $time, a, b, c);
        // Case 4
        a = 1; b = 1; #10;
        $display("%0t\t %b\t %b\t %b", $time, a, b, c);

        
        // End simulation
        $finish;
    end
    
endmodule