`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11/11/2024 03:01:31 PM
// Design Name: 
// Module Name: tb_half_adder
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


module tb_half_adder;
    // Declare testbench signals
    logic a, b;
    logic s, c;
    // Instantiate the andgate module
    andgate dut1 (
        .a(a),
        .b(b),
        .f(c)
    );
    
    xorgate dut2 (
        .a(a),
        .b(b),
        .f(s)
    );    
    
    // Testbench Logic
    initial begin
        // Display header
        $display("Time\t a\t b\t s\t c");
        $display("------------------------");
        
        // Apply test vectors with $display statements
        a = 0; b = 0; #10;
        // Display the value of a, b, and f alog with time
        $display("%0t\t %b\t %b\t %b\t %b", $time, a, b, s, c);

        a = 0; b = 1; #10;
        $display("%0t\t %b\t %b\t %b\t %b", $time, a, b, s, c);

        a = 1; b = 0; #10;
        $display("%0t\t %b\t %b\t %b\t %b", $time, a, b, s, c);
    
        a = 1; b = 1; #10;
        $display("%0t\t %b\t %b\t %b\t %b", $time, a, b, s, c);
    
        // End simulation
        $finish;
    end
    
endmodule
